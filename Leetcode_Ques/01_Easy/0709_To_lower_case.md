# Intuition

We have to convert all uppercase letters in the string into lowercase letters.

Instead of using a built-in function, I created my own `tolower()` function. If a character is between `A` and `Z`, I convert it to lowercase by adding `32` to its ASCII value.

# Approach

* Create a function `tolower()` to convert one character into lowercase.
* Check if the character lies between `A` and `Z`.
* If it is uppercase, add `32` to its ASCII value.
* Traverse the complete string and convert each character.
* Store the converted characters in a new string `s2`.
* Return `s2`.

# Complexity

* Time complexity: **O(n)**
  We traverse the string once.

* Space complexity: **O(n)**
  We use another string `s2` to store the result.

# Code

```cpp
class Solution {
public:

    char tolower(char c) {
        if(c <= 90 && c >= 65) {
            c += 32;
        }
        return c;
    }

    string toLowerCase(string s) {
        string s2 = "";

        for(int i = 0; i < s.length(); i++) {
            s2 += tolower(s[i]);
        }

        return s2;
    }
};
```
