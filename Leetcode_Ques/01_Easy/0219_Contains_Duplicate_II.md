# Intuition

We need to check if any number appears again within a distance of `k`.
So, I can use a hashmap to store the index of the number when it was seen before. When the same number appears again, I calculate the difference between the two indexes. If the difference is less than or equal to `k`, then we have found a nearby duplicate.

# Approach

* Create an `unordered_map` to store each number and its index.
* Traverse through the array.
* If the current number is already present in the map:

  * Find the difference between its previous index and the current index.
  * If the difference is less than or equal to `k`, return `true`.
* Otherwise, update the index of the current number.
* If no duplicate is found within distance `k`, return `false`.

# Complexity

* Time complexity: $$O(n)$$
  because we traverse the array once and hashmap operations take average $$O(1)$$.

* Space complexity: $$O(n)$$
  because the hashmap can store up to `n` elements.

# Code

```cpp []
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map1;

        for (int i = 0; i < nums.size(); i++) {

            if (map1.count(nums[i])) {
                map1[nums[i]] = (map1[nums[i]] > i)
                                    ? map1[nums[i]] - i
                                    : i - map1[nums[i]];

                if (map1[nums[i]] <= k) {
                    return true;
                }
            }

            map1[nums[i]] = i;
        }

        return false;
    }
};
```
