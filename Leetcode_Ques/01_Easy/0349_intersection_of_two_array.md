# Intuition

We need to find the elements that are present in both arrays. We can use a frequency array to mark the elements present in `nums1`. Then, while traversing `nums2`, if an element is marked, it means the element exists in both arrays.

# Approach

Create a frequency array of size `1001` initialized with `0`.

* Traverse `nums1` and mark every element as `1`.
* Traverse `nums2`.
* If `freq[y] == 1`, add `y` to the result and set `freq[y] = 0` to avoid adding the same element again.
* Return the resulting intersection array.

# Complexity

* Time complexity:
  $$O(n + m)$$

* Space complexity:
  $$O(1)$$

# Code

```cpp []
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int>intersection;
        int freq[1001]={0};
        for(int x: nums1){
            freq[x]=1;}
        
        for(int y:nums2){
            if(freq[y]==1){
                intersection.push_back(y);
                freq[y]=0;
                 }
        }
        return intersection;
        }
};
```
