# Intuition
- To find *k* frequent element in an array.
- First we have to count frequency of each element of given array in a *hashmap* having element as key and their frequency as value.
- Then we store the frequency and element in a Maxheap, so the element with the highest frequency comes at the top.
- At last return *result*.

# Approach
- Loop over nums and build a Hashmap *mapp* to store frequency of every element.
- Loop over Hashmap and store key-value pair in Priority queue *maxheap*.
- Running a while loop *k* times appending the *maxheap.top().second()* in vector *result* and popping *maxheap.top()*.
- Return *result*.

# Complexity
- Time complexity : $$O(nlog(n))$$

- Space complexity : $$O(n)$$

# Code
```cpp []
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mapp;

        // Count frequency
        for (int x : nums) {
            mapp[x]++;
        }

        // {frequency, number}
        priority_queue<pair<int, int>> maxHeap;

        // Push into max heap
        for (auto x : mapp) {
            maxHeap.push({x.second, x.first});
        }

        vector<int> result;

        // Get top k frequent elements
        while (k--) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};
```