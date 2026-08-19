# Intuition

Store each restaurant from `list1` along with its index. Then traverse `list2` and check whether each restaurant exists in `list1`. For common restaurants, calculate the sum of their indices and keep the restaurants having the minimum index sum.

# Approach

1. Store every restaurant from `list1` in an `unordered_map` with its index.
2. Traverse `list2`.
3. If the restaurant exists in the map, calculate:
   `index in list1 + index in list2`.
4. If this sum is smaller than the current minimum:

   * Update `min_sum`.
   * Clear the previous answer.
   * Add the current restaurant.
5. If the sum equals `min_sum`, add the restaurant to the answer.
6. Return the answer.

# Complexity

* **Time complexity:** $$O(n + m)$$

  * `n` = size of `list1`
  * `m` = size of `list2`

* **Space complexity:** $$O(n)$$

# Code

```cpp
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> Mapp;

        // Store restaurant and its index from list1
        for (int i = 0; i < list1.size(); i++) {
            Mapp[list1[i]] = i;
        }

        vector<string> ans;
        int min_sum = INT_MAX;

        // Check common restaurants in list2
        for (int i = 0; i < list2.size(); i++) {
            if (Mapp.find(list2[i]) != Mapp.end()) {
                int sum = Mapp[list2[i]] + i;

                if (sum < min_sum) {
                    min_sum = sum;
                    ans.clear();
                    ans.push_back(list2[i]);
                }
                else if (sum == min_sum) {
                    ans.push_back(list2[i]);
                }
            }
        }

        return ans;
    }
};
```
