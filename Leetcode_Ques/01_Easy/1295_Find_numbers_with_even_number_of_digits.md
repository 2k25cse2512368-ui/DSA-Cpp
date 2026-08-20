# Intuition

We need to count how many numbers in the array contain an even number of digits.
For each number, we count its digits and check whether the digit count is even.

# Approach

* Create a helper function `count()` to count the number of digits in a number.
* Traverse every element of `nums`.
* Find the number of digits using `count(nums[i])`.
* If the digit count is even, increment `even`.
* Return `even`.

# Complexity

* Time complexity: **O(n × d)**, where `n` is the number of elements and `d` is the maximum number of digits in a number.
* Space complexity: **O(1)**

# Code

```c
int count(int n) {
    int c = 0;

    while (n != 0) {
        c++;
        n = n / 10;
    }

    return c;
}

int findNumbers(int* nums, int numsSize) {
    int even = 0, s;

    for (int i = 0; i < numsSize; i++) {
        s = count(nums[i]);

        if (s % 2 == 0) {
            even++;
        }
        else {
            continue;
        }
    }

    return even;
}
```
