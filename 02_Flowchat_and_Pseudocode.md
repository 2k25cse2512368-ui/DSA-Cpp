### FLOWCHART        * used for logic building *

**A flowchart is a graphical representation of an algorithm that uses standardized symbols and arrows to show the step-by-step flow of logic for solving a problem.**

## common symbols 
* Oval           -> Start / Stop
* Rectangle      -> Process
* Parallelogram  -> Input / Output
* Diamond        -> Decision
* Arrow          -> Flow Direction

## Example 1->
Problem : To calculate Area of a Square

START
  ↓
Input Side
  ↓
Area = Side * Side
  ↓
Display Area
  ↓
STOP

## Example 2->
Problem : Is Given Number a Even Number or Odd Number

START
  ↓
Input num
  ↓
num % 2 == 0?
 ↙              ↘
Yes              No
 ↓                ↓
Display           Display
"Even"            "Odd"
  ↘              ↙
       ↓
      STOP


### PSEUDOCODE

**Pseudocode is a language-independent representation of an algorithm written using structured programming constructs such as sequence, selection, and iteration, without following the syntax of a specific programming language.**

  
## Example 1->
Problem : To check whether the number is Prime or not

* STEP 1: INPUT num
* STEP 2: SET i = 2, count = 0

* STEP 3: WHILE i <= num/2
            IF num % i == 0
                SET count = 1
                EXIT LOOP
            END IF

            SET i = i + 1
        END WHILE

* STEP 4: IF count == 0
            DISPLAY "Prime Number"
        ELSE
            DISPLAY "Not a Prime Number"
        END IF

* STEP 5: STOP
     
     

****************************************************************