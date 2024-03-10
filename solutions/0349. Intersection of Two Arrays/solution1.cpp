class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        set<int> set1;
        for(auto n : nums1){
            set1.insert(n);
        }
        for(auto n : nums2){
            if(set1.contains(n)){
                res.push_back(n);
                set1.erase(n);
            }
        }
        return res;
    }
};
