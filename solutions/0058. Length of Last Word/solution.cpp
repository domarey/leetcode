class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        for (std::string::reverse_iterator rit=s.rbegin(); rit!=s.rend(); ++rit){
            if(*rit == ' '){
                if(count > 0){
                    return count;
                }
            }
            else{
                count++;
            }
        }
        return count;
    }
};
