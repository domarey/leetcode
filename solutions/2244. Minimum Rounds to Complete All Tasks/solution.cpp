class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        map<int, int> countTasks;
        vector<int> roundCosts{-1,-1,1,1};
        set<int> allTasks;
        for(int i = 0; i < tasks.size(); i++){
            if (countTasks.find(tasks[i]) != countTasks.end()) {
                countTasks[tasks[i]]++;
            }
            else{
                countTasks[tasks[i]] = 1;
            }
            if(!allTasks.contains(tasks[i])){
                allTasks.insert(tasks[i]);
            }
            if (countTasks[tasks[i]]>= roundCosts.size()){
                for(int j = roundCosts.size(); j < countTasks[tasks[i]]+1; j++){
                    if (roundCosts[j-2]<roundCosts[j-3]){
                        roundCosts.push_back(roundCosts[j-2]+1);
                    }
                    else if (roundCosts[j-3] > 0){
                        roundCosts.push_back(roundCosts[j-3]+1);
                    }
                    else {
                        roundCosts.push_back(roundCosts[j-2]+1);
                    }
                }
            }
        }
        int res = 0;
        for(set<int>::iterator it = allTasks.begin(); it != allTasks.end(); it++){
            if(roundCosts[countTasks[*it]] == -1){
                return -1;
            }
            else{
                res += roundCosts[countTasks[*it]];
            }
        }
        return res;
    }
};
