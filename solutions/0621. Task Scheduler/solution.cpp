vector<int> eraseZeros(vector<int>& count){
    vector<int>::reverse_iterator rit = count.rbegin();
    while(rit !=count.rend() && *rit == 0){
        rit++;
    }
    count.erase(remove(count.begin(), count.end(), 0),count.end());
    return count;
}

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        map<char, int> tasksCount;
        for(char c : tasks){
            tasksCount[c]++;
        }
        vector<int> count;
        for(map<char,int>::iterator it = tasksCount.begin(); it != tasksCount.end(); it++){
            count.push_back(it->second);
        }
        int res = 0;
        while(count.size() > 0){
            sort(count.begin(),count.end(),greater<int>());
            if (count.size() < n+1){
                for(int& num : count){
                    num--;
                    res++;
                }
                int before = count.size();
                count = eraseZeros(count);
                if(count.size() == 0) break;
                res += n+1-before;
                
            } else{
                for(int i = 0; i < n+1; i++){
                    count[i]--;
                    res++;
                }
                count = eraseZeros(count);
            }
            
        }
        return res;
    }
};
