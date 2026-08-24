# Intuition

The robot moves in four directions: Up, Down, Left, and Right.

To return to the starting point, the number of Up moves must be equal to the number of Down moves. Similarly, the number of Left moves must be equal to the number of Right moves.

So, we can simply count how many times each direction occurs and check whether the opposite directions are equal.

# Approach

* Initialize four counters for `U`, `D`, `L`, and `R`.
* Traverse through every character in the `moves` string.
* Increase the corresponding counter for each direction.
* At the end, check:

  * `U == D`
  * `L == R`
* If both conditions are true, the robot returns to the starting point, so return `true`.
* Otherwise, return `false`.

# Complexity

* Time complexity: **O(n)**
  We traverse the string once, where `n` is the length of `moves`.

* Space complexity: **O(1)**
  We only use four integer variables.

# Code

```cpp
class Solution {
public:
    bool judgeCircle(string moves) {
        int countU = 0, countD = 0, countL = 0, countR = 0;

        for(char c : moves) {
            if(c == 'U') countU++;
            if(c == 'D') countD++;
            if(c == 'L') countL++;
            if(c == 'R') countR++;
        }

        return countU == countD && countL == countR;
    }
};
```
