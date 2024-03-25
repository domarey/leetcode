class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int curr = 0;
        int i = 0;
        vector<int> res;
        while(i < nums.size()){
            if(nums[i] == i+1 || nums[i] == 0){
                i++;
            } else {
                curr = nums[i];
                nums[i]=0;
                while(nums[curr-1] != curr && nums[curr-1] != 0){
                    int temp = nums[curr-1];
                    nums[curr-1]=curr;
                    curr = temp;
                }
                if(nums[curr-1] == 0){
                    nums[curr-1] = curr;
                } else if (nums[curr-1] == curr){
                    res.push_back(curr);
                }
            }
        }
        return res;
    }
};
