class Solution {
public:
    int findKthLargest(std::vector<int>& nums, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq(nums.begin(), nums.   begin() + k);
    for (int i = k; i < nums.size(); i++)
        if (nums[i] > pq.top()) pq.pop(), pq.push(nums[i]);
    return pq.top();
  }
};