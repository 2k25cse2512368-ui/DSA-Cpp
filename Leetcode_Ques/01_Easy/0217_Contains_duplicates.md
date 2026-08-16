# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->

We need to check if any number appears more than once in the array. We can store the numbers we have already seen in a hash table. If we find the same number again, then a duplicate exists.

# Approach

<!-- Describe your approach to solving the problem. -->

Use a hash table implemented with an array of linked lists. For each number, calculate its hash index using `abs(nums[i]) % SIZE`. Search the linked list at that index. If the number is already present, return `true`. Otherwise, insert it into the hash table. If all elements are processed without finding a duplicate, return `false`.

# Complexity

* Time complexity:
  $$O(n)$$ average case

* Space complexity:
  $$O(n)$$

# Code

```c []
#include <stdbool.h>
#include <stdlib.h>

typedef struct Node {
    int val;
    struct Node* next;
} Node;

#define SIZE 100003

bool containsDuplicate(int* nums, int numsSize) {
    Node* hash[SIZE] = {0};

    for(int i = 0; i < numsSize; i++) {

        int key = abs(nums[i]) % SIZE;

        Node* curr = hash[key];

        while(curr) {
            if(curr->val == nums[i])
                return true;
            curr = curr->next;
        }

        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->val = nums[i];
        newNode->next = hash[key];
        hash[key] = newNode;
    }

    return false;
}
```
