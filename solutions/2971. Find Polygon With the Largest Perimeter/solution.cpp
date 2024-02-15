class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<long long>());
        long long res = accumulate(nums.begin(), nums.end(), 0LL);
        for(int i = 0; i < nums.size()-1; i++){
            if(nums[i] < res-nums[i]){
                return res;
            }
            else{
                res -= nums[i];
            }
        }
        return -1;
    }
};
