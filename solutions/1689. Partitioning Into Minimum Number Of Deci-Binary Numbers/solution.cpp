class Solution {
public:
    int minPartitions(string n) {
        int res = 0;
        for(string::iterator it = n.begin(); it != n.end(); ++it){
            int decimal = *it - '0';
            if (res < decimal){
                res = decimal;
            }
        }
        return res;
    }
};
