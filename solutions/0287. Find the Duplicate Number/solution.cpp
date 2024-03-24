class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        for(int n : nums){
            if(s.contains(n)){
                return n;
            } else{
                s.insert(n);
            }
        }
        return -1;
    }
};
