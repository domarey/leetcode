class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> res;
        for(int i = 0; i < boxes.length(); ++i){
            int count = 0;
            for(int j = 0; j < boxes.length(); ++j){
                if(i != j){
                    if(boxes[j] == '1'){
                        count += abs(i-j);
                    }
                }
            }
            res.push_back(count);
        }
        return res;
    }
};
