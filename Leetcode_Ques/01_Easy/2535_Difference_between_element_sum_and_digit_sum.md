**# Intuition**

* We have to find the difference between the sum of all elements and the sum of all digits present in those elements.
* So first I calculate the normal sum of all elements.
* Then for every element, I calculate its digit sum using a separate `sum()` function.
* At last, subtract the digit sum from the element sum.

**# Approach**

* Create a `sum()` function to calculate the sum of digits of one number.
* Run a loop through the `nums` array.
* Add every element to `ele_sum`.
* For every element, call the `sum()` function and add its result to `dig_sum`.
* Return `ele_sum - dig_sum`.

**# Complexity**

* Time complexity: $$O(n )$$
* Space complexity: $$O(1)$$

**# Code**

```cpp
class Solution {
public:
    int sum(int val){
        int dig_sum = 0;

        while(val != 0){
            dig_sum += val % 10;
            val = val / 10;
        }

        return dig_sum;
    }

    int differenceOfSum(vector<int>& nums) {
        int ele_sum = 0, dig_sum = 0;

        for(int i = 0; i < nums.size(); i++){
            ele_sum += nums[i];
            dig_sum += sum(nums[i]);
        }

        int diff = ele_sum - dig_sum;

        return diff;
    }
};
```

