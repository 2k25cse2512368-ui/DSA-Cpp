Here’s a natural, beginner-style explanation matching **your exact approach and code**:

# Intuition

First, I reverse the complete string. This puts the words in reverse order, but the letters inside each word are also reversed.

For example:

`"the sky is blue"`

after reversing the whole string becomes something like:

`"eulb si yks eht"`

So, I go through the reversed string, find each word, and reverse that individual word again. This gives the correct spelling of every word while keeping the words in reverse order.

I also skip extra spaces so that the final answer contains only one space between words.

# Approach

1. Reverse the complete string using `reverse()`.
2. Traverse the reversed string character by character.
3. Whenever I find the beginning of a word, I store its starting position.
4. Continue until I reach a space, which means the word has ended.
5. Reverse that particular word to correct its spelling.
6. Add the corrected word to the `result` string.
7. Ignore extra spaces before or between words.
8. After the loop, process the last word separately because it may not be followed by a space.
9. Return the final `result`.

# Complexity

* Time complexity: **O(n)**

  The string is traversed and reversed a few times. Overall, the operations take linear time.

* Space complexity: **O(n)**

  I use the `result` string to store the final reversed sentence.

# Code

```cpp
class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());

        int start = 0;
        int end = 0;

        string f = "";
        string result = ""; 

        for (int c = 0; c < s.size(); c++) {

            // Skip extra spaces
            if (s[c] == ' ' && f.empty()) {
                continue;
            }

            // Word has ended
            else if (s[c] == ' ' && !f.empty()) {

                reverse(s.begin() + start, s.begin() + end);

                result += s.substr(start, end - start) + " ";

                f.clear();
            }

            // Current character belongs to a word
            else {
                if (f.empty()) {
                    start = c;
                    end = c;
                }

                f += s[c];
                end++;
            }
        }

        // Handle the last word
        if (!f.empty()) {
            reverse(s.begin() + start, s.begin() + end);
            result += s.substr(start, end - start);
        }

        // Remove the extra space at the end
        else if (!result.empty() && result.back() == ' ') {
            result.pop_back();
        }

        return result;
    }
};
```
