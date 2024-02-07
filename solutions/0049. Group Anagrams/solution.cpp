class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<set<char>> arraySet;
        for(auto s : strs){
            set<char> charSet;
            for (auto c : s){
                charSet.insert(c);
            }
            arraySet.push_back(charSet);
        }
        vector<int> groups(strs.size(),-1);
        for(int i = 0; i < arraySet.size() ; i++){
            if(groups[i] == -1){
                groups[i] = i;
                for(int j = i+1; j < arraySet.size(); j++){
                    if(groups[j] == -1){
                        if(arraySet[i] == arraySet[j]){
                        groups[j] = j;
                        }
                    }
                }
            }
        }

    }
};
