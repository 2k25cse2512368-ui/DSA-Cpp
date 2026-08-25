
# Intuition

I first store all the strings from `list1` in a hashmap along with their index. This makes it easy to check whether a restaurant from `list2` is also present in `list1` and find its index quickly.

Then I go through `list2` and calculate the sum of the indexes for every common restaurant. I keep track of the smallest index sum found so far. If I find a smaller sum, I clear the previous answer and add the current restaurant. If the sum is equal to the minimum, I add that restaurant too.

# Approach

* Store each restaurant from `list1` in an `unordered_map` with its index.
* Traverse `list2` and check if the restaurant exists in the map.
* For every common restaurant, calculate:
  `index in list1 + index in list2`
* Keep the minimum index sum in `min_sum`.
* If the current sum is smaller than `min_sum`, clear the answer and add the current restaurant.
* If the current sum is equal to `min_sum`, add the restaurant to the answer.
* Finally, return the answer.

# Complexity

* Time complexity: $$O(n + m)$$
  where `n` is the size of `list1` and `m` is the size of `list2`.

* Space complexity: $$O(n)$$
  because the hashmap stores the restaurants from `list1`.

# Code

```cpp
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int> Mapp;

        for (int i = 0; i < list1.size(); i++) {
            Mapp[list1[i]] = i;
        }

        vector<string> ans;
        int min_sum = INT_MAX;

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
