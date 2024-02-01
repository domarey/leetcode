class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> mincost{cost[0],cost[1]};
        for(int i = 2; i < cost.size() ; i++){
            if(mincost[i-1]< mincost[i-2]){
                mincost.push_back(cost[i]+mincost[i-1]);
            }
            else{
                mincost.push_back(cost[i]+mincost[i-2]);
            }
            
        }
        
        return min(mincost[cost.size()-1], mincost[cost.size()-2]);
    }
};
