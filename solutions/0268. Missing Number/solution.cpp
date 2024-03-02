class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = reduce(nums.begin(),nums.end());
        int n = nums.size();
        return n*(n+1)/2 - sum;
    }
};
