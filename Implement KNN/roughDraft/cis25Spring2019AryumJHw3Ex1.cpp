/**
 * Program Name: cis25Spring2019AryumJHw3Ex1.cpp
 * Discussion:   HW #3
 * Written By:   Aryum Jeon
 * Date:         2019/03/28
 */

#include "fractionAryumJ.hpp"
#include "fractionUtilityAryumJ.hpp"

//application driver
int main()
{
    displayPanelAryumJ();
    return 0;
}
//function definition

/* PROGRAM OUTPUT
 
CIS 25 - C++ Programming
Laney College
Aryum Jeon

Assignment Information --
  Assignment Number:  Homework 03,
                      Exercise #1
  Written by:         Aryum Jeon
  Due Date:           Thursday, March 28, 2019


*********************
*    MENU - HW#3    *
*  1. Initializing  *
*  2. Adding        *
*  3. Subtracting   *
*  4. Multiplying   *
*  5. Dividing      *
*  6. Printing      *
*  7. Quit          *
*********************
Select an option (use integer value only): 6

  Printing Option --

    Not a proper call as no Fractions are available!

(How many objects were involved? 000)

*********************
*    MENU - HW#3    *
*  1. Initializing  *
*  2. Adding        *
*  3. Subtracting   *
*  4. Multiplying   *
*  5. Dividing      *
*  6. Printing      *
*  7. Quit          *
*********************
Select an option (use integer value only): 2

  Adding Option --

    Not a proper call as no Fractions are available!

(How many objects were involved? 000)

*********************
*    MENU - HW#3    *
*  1. Initializing  *
*  2. Adding        *
*  3. Subtracting   *
*  4. Multiplying   *
*  5. Dividing      *
*  6. Printing      *
*  7. Quit          *
*********************
Select an option (use integer value only): 1

  INITIALIZING Option -
    Calling menuInit()!

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    ***************************
    Select an option (integer only): 2

      Not a proper call as no Fractions are available!

(How many objects were involved? 000)

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    ***************************
    Select an option (integer only): 5

      WRONG OPTION!

(How many objects were involved? 000)

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    ***************************
    Select an option (integer only): 1

      Creating 2 New Fraction objects --

        Calling create()!

          Creating Left Fraction
            Enter num : 5
            Enter denom : -9

Calling Fraction()

          Left Fraction -
            num : -5
            denom : 9

          Creating Right Fraction
            Enter num : 3
            Enter denom : -4

Calling Fraction()

          Right Fraction -
            num : -3
            denom : 4

(How many objects were involved? 002)

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    ***************************
    Select an option (integer only): 2

      Updating 2 EXISTING Fraction objects --
        Calling updatingMenu()!

        ********************************
        *  SubMENU - UPDATING          *
        *   1. Left Fraction           *
        *   2. Right Fraction          *
        *   3. Left and Right Fraction *
        *   4. Returning               *
        ********************************
        Select an option (integer only): 2

        Updating RIGHT Fraction -
          Enter num : 15
          Enter denom : -11

Calling Fraction()

(How many objects were involved? 001)

        ********************************
        *  SubMENU - UPDATING          *
        *   1. Left Fraction           *
        *   2. Right Fraction          *
        *   3. Left and Right Fraction *
        *   4. Returning               *
        ********************************
        Select an option (integer only): 4

		  Returning to previous menu!

(How many objects were involved? 000)

    **************************
    * SubMENU - INITIALIZING *
    *  1. Creating           *
    *  2. Updating           *
    *  3. Returning          *
    ***************************
    Select an option (integer only): 3

	  Returning to previous menu!

*********************
*    MENU - HW#3    *
*  1. Initializing  *
*  2. Adding        *
*  3. Subtracting   *
*  4. Multiplying   *
*  5. Dividing      *
*  6. Printing      *
*  7. Quit          *
*********************
Select an option (use integer value only): 6

  PRINTING Option -
    Calling menuPrint()!

    ********************************
    *     Sub MENU -- PRINTING     *
    *  (leftOp, rightOp, result)   *
    *  1. print() - Member         *
    *  2. print() - Stand Alone    *
    *  3. ostream << - Stand Alone *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, or 3): 1

	  Calling member print() -

		Left Fraction -
          num : -5
          denom : 9

		Right Fraction -
          num : -15
          denom : 11

		Resulting Fraction -
		  NULL

(How many objects were involved? 000)

    ********************************
    *     Sub MENU -- PRINTING     *
    *  (leftOp, rightOp, result)   *
    *  1. print() - Member         *
    *  2. print() - Stand Alone    *
    *  3. ostream << - Stand Alone *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, or 3): 2

	  Calling stand-alone print() -

		Left Fraction -
          num : -5
          denom : 9

		Right Fraction -
          num : -15
          denom : 11

		Resulting Fraction -
		  NULL

(How many objects were involved? 000)

    ********************************
    *     Sub MENU -- PRINTING     *
    *  (leftOp, rightOp, result)   *
    *  1. print() - Member         *
    *  2. print() - Stand Alone    *
    *  3. ostream << - Stand Alone *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, or 3): 4

	  Returning to previous menu!

(How many objects were involved? 000)

*********************
*    MENU - HW#3    *
*  1. Initializing  *
*  2. Adding        *
*  3. Subtracting   *
*  4. Multiplying   *
*  5. Dividing      *
*  6. Printing      *
*  7. Quit          *
*********************
Select an option (use integer value only): 2

  ADDING Option --

    ********************************
    *      Sub MENU -- ADDING      *
    *  1. add() - Member           *
    *  2. add() - Stand Alone      *
    *  3. operator+() - Member     *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, 3, or 4): 5

      WRONG OPTION ...

(How many objects were involved? 000)

    ********************************
    *      Sub MENU -- ADDING      *
    *  1. add() - Member           *
    *  2. add() - Stand Alone      *
    *  3. operator+() - Member     *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, 3, or 4): 1

	  Calling member add()! -

Calling Fraction()

Calling ~Fraction()

        num : -190
        denom : 99

(How many objects were involved? 002)

    ********************************
    *      Sub MENU -- ADDING      *
    *  1. add() - Member           *
    *  2. add() - Stand Alone      *
    *  3. operator+() - Member     *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, 3, or 4): 2

	  Calling stand alone add() -

Calling Fraction()

Calling ~Fraction()

        num : -190
        denom : 99

Calling ~Fraction()

(How many objects were involved? 003)

    ********************************
    *      Sub MENU -- ADDING      *
    *  1. add() - Member           *
    *  2. add() - Stand Alone      *
    *  3. operator+() - Member     *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, 3, or 4): 3

	  Calling member operator+() -

Calling Fraction()

Calling ~Fraction()

        num : -190
        denom : 99

(How many objects were involved? 002)

    ********************************
    *      Sub MENU -- ADDING      *
    *  1. add() - Member           *
    *  2. add() - Stand Alone      *
    *  3. operator+() - Member     *
    *  4. Return to Previous MENU  *
    ********************************
    Select an option (1, 2, 3, or 4): 4

	  Returning to previous menu!

(How many objects were involved? 000)

*********************
*    MENU - HW#3    *
*  1. Initializing  *
*  2. Adding        *
*  3. Subtracting   *
*  4. Multiplying   *
*  5. Dividing      *
*  6. Printing      *
*  7. Quit          *
*********************
Select an option (use integer value only): 3

  SUBTRACTING Option --

    ***********************************
    *      Sub MENU -- subtracting    *
    *  1. subtracting() - Member      *
    *  2. subtracting() - Stand Alone *
    *  3. operator-() - Member        *
    *  4. Return to Previous MENU     *
    ***********************************
    Select an option (1, 2, 3, or 4): 5

      WRONG OPTION ...

(How many objects were involved? 000)

    ***********************************
    *      Sub MENU -- subtracting    *
    *  1. subtracting() - Member      *
    *  2. subtracting() - Stand Alone *
    *  3. operator-() - Member        *
    *  4. Return to Previous MENU     *
    ***********************************
    Select an option (1, 2, 3, or 4): 1

	  Calling member subtract()! -

Calling Fraction()

Calling ~Fraction()

        num : 80
        denom : 99

(How many objects were involved? 002)

    ***********************************
    *      Sub MENU -- subtracting    *
    *  1. subtracting() - Member      *
    *  2. subtracting() - Stand Alone *
    *  3. operator-() - Member        *
    *  4. Return to Previous MENU     *
    ***********************************
    Select an option (1, 2, 3, or 4): 4

	  Returning to previous menu!

(How many objects were involved? 000)

*********************
*    MENU - HW#3    *
*  1. Initializing  *
*  2. Adding        *
*  3. Subtracting   *
*  4. Multiplying   *
*  5. Dividing      *
*  6. Printing      *
*  7. Quit          *
*********************
Select an option (use integer value only): 7

Calling ~Fraction()

Calling ~Fraction()

Calling ~Fraction()

Having fun ...!

(How many objects were involved? 000)

Calling ~Fraction()
 
 */

/* Logic_Code_Output Issues
 1. I had to use 'paste and reserve formatting'
 to recover the original format on Xcode.
 2. I am a MacOS user. when i opened my c++ file in class with
 visual studio, the file did not run. I had to create new
 project and copy and paste my code to make it work.
 3. At the end of the run, 'Program ended with exit code'
 appears in the middle. it was fixed by pressing (command-).
 */





