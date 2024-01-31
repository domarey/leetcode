class Solution {
public:
    bool checkIfPangram(string sentence) {
        const std::string alphabet{"abcdefghijklmnopqrstuvwxyz"};
        std::map<char, bool> m;
        for(auto& c : alphabet){
            m[c] = false;
        }
        for(char& c : sentence){
            if(!m[c]){
                m[c] = true;
            }
        }
        for(std::map<char,bool>::iterator it = m.begin(); it != m.end(); ++it) {
            if(!it->second){
                return false;
            }
        }
        return true;
    }
};
