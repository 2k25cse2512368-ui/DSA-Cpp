# Intuition

Two strings are isomorphic if each character in the first string can be mapped to exactly one character in the second string, and the mapping must work in both directions.

So, we need to maintain:

* A mapping from `s → t`
* A mapping from `t → s`

This prevents two different characters from being mapped to the same character.

# Approach

1. If the lengths of `s` and `t` are different, return `false`.
2. Create two hash maps:

   * `hmap1` stores the mapping from `s` characters to `t` characters.
   * `hmap2` stores the reverse mapping from `t` characters to `s` characters.
3. Traverse both strings simultaneously.
4. If neither character has been mapped, create the mapping in both hash maps.
5. Otherwise, check whether the existing mappings are consistent.
6. If any mapping is inconsistent, return `false`.
7. If the entire string is traversed successfully, return `true`.

# Complexity

* Time complexity: **O(n)**
* Space complexity: **O(k)**, where `k` is the number of distinct characters.

# Code

```cpp
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, char> hmap1;
        unordered_map<char, char> hmap2;

        for (int i = 0; i < s.size(); i++) {
            char a = s[i];
            char b = t[i];

            if (hmap1.count(a) == 0 && hmap2.count(b) == 0) {
                hmap1[a] = b;
                hmap2[b] = a;
            }
            else {
                if (hmap1[a] != b || hmap2[b] != a)
                    return false;
            }
        }

        return true;
    }
};
```
