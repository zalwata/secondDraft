from numpy.linalg import norm
import numpy as np

def euclidean(a, b):
    return norm(a-b)

class KNearestNeighbors:

    def __init__(self, k=3, distance_metric=euclidean):
        self.k = k
        self.distance = distance_metric
        self.data = None

    def train(self, X, y):
        if len(X) != len(y) or type(X) != type(y):
            raise ValueError("X and y are incompatible.")
        if type(X) == np.ndarray:
            X, y = X.tolist(), y.tolist()
        self.data = [X[i]+[y[i]] for i in range(len(X))]

    def predict(self, a):
        neighbors = []
        distances = {self.distance(x[:-1], a): x for x in self.data}
        for key in sorted(distances.keys())[:self.k]:
            neighbors.append(distances[key][-1])
        return max(set(neighbors), key=neighbors.count)

raw_data = np.array([[1, 2, 1], [3, 2, 1], [2, 4, 1],
                     [3, 3, 1], [2, 5, 1], [-1, -2, 0],
                     [-3, -2, 0], [-2, -4, 0], [-3, -3, 0],
                     [-2, -5, 0]], dtype=float)

X = raw_data[:, :2]
y = raw_data[:, -1]

model = KNearestNeighbors(k=3, distance_metric=euclidean)
model.train(X, y)

print("Value: {},\tPrediction: {}".format([1, 0], model.predict(np.array([1, 0]))))
print("Value: {},\tPrediction: {}".format([0, 1], model.predict(np.array([0, 1]))))
print("Value: {},\tPrediction: {}".format([0, 0], model.predict(np.array([0, 0]))))
print("Value: {},\tPrediction: {}".format([-1, 0], model.predict(np.array([-1, 0]))))
print("Value: {},\tPrediction: {}".format([0, -1], model.predict(np.array([0, -1]))))