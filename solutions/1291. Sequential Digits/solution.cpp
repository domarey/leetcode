class Solution {
public:
  //get the number of digits of an integer
    int nDigits(int number){
        int digits = 0;
        while(number) {
            number /= 10;
            digits++;
        }
        return digits;
    }

    vector<int> sequentialDigits(int low, int high) {
        vector<int> res;
        string digits = "123456789";
        int nlow = nDigits(low);
        int nhigh = nDigits(high);
        for(int window = nlow; window <= nhigh ; window++){
            for(int i = 0; i < digits.size()-window+1; i++){
              // extract sequential digits number from the string and convert it to an int
                int possibleNum = stoi(digits.substr(i,window));
                if(possibleNum >= low && possibleNum <= high){
                    res.push_back(possibleNum);
                }
            }
        }
        return res;
    }
};
