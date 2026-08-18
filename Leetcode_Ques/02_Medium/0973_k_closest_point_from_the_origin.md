# Intuition

We need to find the `k` points closest to the origin `(0,0)`.
For each point, calculate its squared distance from the origin:

`x² + y²`

We use a **max heap of size `k`** so that the farthest point among the selected points stays at the top. If the heap contains more than `k` points, we remove the farthest one.

# Approach

1. Create a max heap storing `{distance, point}`.
2. Calculate the squared distance of every point from the origin.
3. Push each point into the max heap.
4. If the heap size becomes greater than `k`, remove the point with the largest distance.
5. After processing all points, the heap contains the `k` closest points.
6. Extract these points into the result vector.

# Complexity

* Time complexity:
  $$O(n \log k)$$

* Space complexity:
  $$O(k)$$

# Code

```cpp
class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

        priority_queue<pair<int, vector<int>>> maxHeap;

        for (auto& point : points) {

            int distance = point[0] * point[0] + point[1] * point[1];

            maxHeap.push({distance, point});

            if (maxHeap.size() > k) {
                maxHeap.pop();
            }
        }

        vector<vector<int>> result;

        while (!maxHeap.empty()) {
            result.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return result;
    }
};
```
