class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        map<int, int> numCount;
        for(int i = 0; i< arr.size(); i++){
            numCount[arr[i]]++;
        }
        vector<int> count;
        for(map<int,int>::iterator it = numCount.begin(); it != numCount.end(); it++){
            count.push_back(it->second);
        }
        sort(count.begin(), count.end());
        int sum = 0;
        for(int i = 0; i < count.size(); i++){
            if(count[i]+sum <= k){
                sum += count[i];
            }
            else{
                return count.size() - i;
            }
        }
        return 0;
    }
};
