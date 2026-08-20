# Intuition

The given array `nums` is a permutation, so every `nums[i]` is a valid index of the array.
For each index `i`, we need to find the value at index `nums[i]`. Therefore, we simply calculate `nums[nums[i]]` and store it in a new array.

# Approach

* Create a new array `returned` of size `numsSize`.
* Traverse the array from `0` to `numsSize - 1`.
* For every index `i`, set:
  `returned[i] = nums[nums[i]]`
* Set `returnSize` to `numsSize`.
* Return the newly created array.

# Complexity

* Time complexity: **O(n)** — We traverse the array once.
* Space complexity: **O(n)** — We create a new array of size `n`.

# Code

```c
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* buildArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;

    int* returned = (int*)malloc(numsSize * sizeof(int));

    for (int i = 0; i < numsSize; i++) {
        returned[i] = nums[nums[i]];
    }

    return returned;
}
```
