# Intuition

If the number has more than one digit, calculate the sum of its digits. Repeat this process until only a single digit remains.
 
# Approach

1. Create a helper function `sum()` to calculate the sum of all digits of a number.
2. While `num` has two or more digits (`num >= 10`), replace it with the sum of its digits.
3. Once `num` becomes a single digit, return it.

# Complexity

* Time complexity : $$O((log n)^2)$$
* Space complexity : $$O(1)$$

# Code

```cpp
class Solution {
public:
    int sum(int val) {
        int sum = 0;

        while (val != 0) {
            sum += val % 10;
            val /= 10;
        }

        return sum;
    }

    int addDigits(int num) {
        while (num >= 10) {
            num = sum(num);
        }

        return num;
    }
};
```
