class Solution {
public:
    bool sameSign(int x, int y){
        return (x >= 0) ^ (y < 0);
    }

    vector<int> rearrangeArray(vector<int>& nums) {
        queue<int> aux;
        int idx = 1;
        if(nums[0] < 0){
            aux.push(nums[0]);
            idx = 0;
        }
        for(int i = 1; i < nums.size(); i++){
            if(aux.empty()){   
                if(sameSign(nums[i],nums[i-1])){
                    aux.push(nums[i]);
                }
                else{
                    idx++;
                }
            }
            else{
                if(sameSign(nums[i],aux.front())){
                    aux.push(nums[i]);
                }
                else{
                    nums[idx] = nums[i];
                    idx++;
                    nums[idx] = aux.front();
                    aux.pop();
                    idx++;
                }
            }
        }
        return nums;
    }
};
