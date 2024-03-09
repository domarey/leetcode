class Solution {
public:
    int minimumLength(string s) {
        string::iterator start = s.begin();
        string::reverse_iterator end = s.rbegin();
        while(distance(start,end.base()-1)>0){
            if(*start == *end){
                char curr = *start;
                while(*start == curr && start != s.end()-1){
                    start++;
                }
                while(*end == curr && end != s.rend()-1){
                    end++;
                }
            }
            else{
                break;
            }
        }
        int res = distance(start,end.base());
        if(res<0) return 0;
        return res;
    }
};
