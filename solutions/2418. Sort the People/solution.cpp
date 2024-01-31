class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<string> res;
        std::map<int, string> m;
        for(int i = 0; i < heights.size(); ++i){
            m[heights[i]] = names[i];
        }
        for (auto i = m.rbegin(); i != m.rend(); i++){
            res.push_back(i->second);
        }
        return res;
    }
};
