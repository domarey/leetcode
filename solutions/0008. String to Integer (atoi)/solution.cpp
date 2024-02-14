class Solution {
public:
    string removeLeadingWhitespace(string s){
        int i = 0;
        while(s[i] == ' '){
            i++;
        }
        return s.erase(0, i);
    }

    int myAtoi(string s) {
        int idx;
        string num = "";
        bool positive = true;
        s = removeLeadingWhitespace(s);
        if(s[0] == '-'){
            positive = false;
            s = s.erase(0, 1);
        }
        else if(s[0] == '+'){
            positive = true;
            s = s.erase(0, 1);
        }
        else if(!isdigit(s[0])){
            return 0;
        }
        for(int i = 0; i < s.length(); i++){
            if(isdigit(s[i])){
                num += s[i];
            }
            else{
                break;
            }
        }
        int res = 0;
        if(num.length() >= 10){
            try{
                res = stoi(num);
            } 
            catch(const std::out_of_range& e ){
                if(positive){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            if(positive){
                return res;
            }
            else{
                return res*-1;
            }
        }
        else{
            if(num.length() == 0){
                return res;
            }
            res = stoi(num);
            if(!positive){
                return res*-1;
            }
        }
        return res;
    }
};
