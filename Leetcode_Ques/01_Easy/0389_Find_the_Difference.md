# Intuition

We need to find the character which is added to string `t`. Since `t` contains all the characters of `s` plus one extra character, I can use a frequency array to count the characters.

# Approach

* Create a frequency array of size `26` for all lowercase letters.
* Traverse string `s` and increase the frequency of each character.
* Traverse string `t` and decrease the frequency of each character.
* The extra character will have a frequency of `-1` because it exists in `t` but not in `s`.
* Traverse the frequency array and return the character whose frequency is negative.

# Complexity

* Time complexity: $$O(n)$$
  where `n` is the length of string `t`.

* Space complexity: $$O(1)$$
  because the frequency array always has only 26 elements.

# Code

```cpp []
class Solution {
public:
    char findTheDifference(string s, string t) {
        int freq[26] = {0};

        for (char i : s) {
            freq[i - 'a']++;
        }

        for (char j : t) {
            freq[j - 'a']--;
        }

        for (int i = 0; i < 26; i++) {
            if (freq[i] < 0) {
                return (char)(i + 'a');
            }
        }

        return '\0';
    }
};
```
