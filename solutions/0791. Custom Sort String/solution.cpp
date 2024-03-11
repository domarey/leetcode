class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> sMap;
        for(auto c : s){
            if(sMap.contains(c)){
                sMap[c]++;
            }
            else{
                sMap[c] = 1;
            }
        }
        string res = "";
        for(auto c : order){
            res += string(sMap[c], c);
            sMap.erase(c);
        }
        for(map<char, int>::iterator it = sMap.begin(); it != sMap.end(); it++){
            res += string(it->second,it->first);
        }
        return res;
    }
};
