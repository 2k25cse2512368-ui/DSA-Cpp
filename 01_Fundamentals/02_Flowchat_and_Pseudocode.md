### FLOWCHART        * used for logic building *

**A flowchart is a graphical representation of an algorithm that uses standardized symbols and arrows to show the step-by-step flow of logic for solving a problem.**

## common symbols 
* Oval           -> Start / Stop
* Rectangle      -> Process
* Parallelogram  -> Input / Output
* Diamond        -> Decision
* Arrow          -> Flow Direction

## Example 1 → Area of a Square

Problem : Calculate the area of a square.

```mermaid
flowchart TD
    A([START]) --> B[/Input Side/]
    B --> C[Area = Side × Side]
    C --> D[/Display Area/]
    D --> E([STOP])
```

## Example 2->
Problem : Is Given Number a Even Number or Odd Number

```mermaid
flowchart TD
    A([START]) --> B[/Input num/]
    B --> C{num % 2 == 0?}
    C -- Yes --> D[/Display "Even Number"/]
    C -- No --> E[/Display "Odd Number"/]
    D --> F([STOP])
    E --> F
```


### PSEUDOCODE

**Pseudocode is a language-independent representation of an algorithm written using structured programming constructs such as sequence, selection, and iteration, without following the syntax of a specific programming language.**

  
## Example 1->
Problem : To check whether the number is Prime or not

```mermaid
flowchart TD
    A([START]) --> B[/Input num/]
    B --> C{num <= 1?}
    C -- Yes --> D[/Display "Not Prime"/]
    C -- No --> E[Set i = 2]
    E --> F{i <= num/2?}
    F -- No --> G[/Display "Prime"/]
    F -- Yes --> H{num % i == 0?}
    H -- Yes --> D
    H -- No --> I[i = i + 1]
    I --> F
    D --> J([STOP])
    G --> J
```

****************************************************************