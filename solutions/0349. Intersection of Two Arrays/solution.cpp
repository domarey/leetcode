class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1;
        set<int> set2;
        for(auto num : nums1){
            set1.insert(num);
        }
        for(auto num : nums2){
            set2.insert(num);
        }
        vector<int> res;
        for(auto num : set2){
            if(set1.contains(num)){
                res.push_back(num);
            }
        }
        return res;
    }
};
