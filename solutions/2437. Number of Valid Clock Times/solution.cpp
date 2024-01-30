class Solution {
public:
    int countTime(string time) {
        int count = 1;
        if (time[4] == '?'){
            count *= 10;
        }
        if (time[3] == '?'){
            count *= 6;
        }
        if (time[1] == '?'){
            if (time[0] == '0' or time[0] == '1'){
                count *= 10;
            }
            else{
                if (time[0] == '2'){
                    count *= 4;
                }
                else{
                    return count*24;
                }
            }
        }
        if(time[0] == '?'){
            int unitHours = time[1] - '0';
            if(unitHours <= 3){
                count *= 3;
            }
            else{
                count *= 2;
            }
        }
        return count;
    }
};
