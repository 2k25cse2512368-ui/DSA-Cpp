# Intuition
- We have to find two numbers whose sum is equal to the target and return index of those numbers
- Instead of checking all the pairs we can generate the pair with the help of Hash Maps 

# Approach
1. Store all the elements and their indices as key and value respectively in Hash Map
2. Calculate ' target-nums[i] ' for each key in hash map
3. Check whether it exist in the Hash_map avoided repition
4. Index of that and Value is returned

# Complexity
- Time complexity:$$O(n)$$

- Space complexity:$$O(n)$$

# Code
```cpp []
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> map1;

        // Store value -> index
        for (int i = 0; i < nums.size(); i++) {
            map1[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); i++) {
            int val = nums[i];

            if (map1.find(target - val) != map1.end() && map1[target - val] != i) {
                return {i, map1[target - val]};
            }
        }

        return {};
    }
};
```