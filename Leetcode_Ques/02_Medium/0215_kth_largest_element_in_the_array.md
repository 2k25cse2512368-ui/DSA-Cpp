# Intuition
To find the kth largest element, we can use a **max heap**. A max heap always keeps the largest element at the top. By removing the largest element `k - 1` times, the element remaining at the top will be the kth largest element.

# Approach
1. Create a max heap using `priority_queue<int>`.
2. Insert every element of `nums` into the max heap.
3. Remove the largest element `k - 1` times.
4. The element at the top of the heap is the kth largest element.
5. Return `maxHeap.top()`.

# Complexity
- Time complexity:
$$O(n + k\log n)$$

- Space complexity:
$$O(n)$$

# Code
```cpp
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> maxHeap;

        for (int x : nums) {
            maxHeap.push(x);
        }

        for (int i = 0; i < k - 1; i++) {
            maxHeap.pop();
        }

        return maxHeap.top();
    }
};