class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        multiset<int> usedLadders;
        int usedBricks = 0;
        for(int i = 0; i < heights.size()-1; i++){
            int heightDiff = heights[i+1] - heights[i]; 
            if(heightDiff > 0){
                bool inserted = false;
                if(ladders > 0){
                    if(usedLadders.size() == ladders){
                        set<int>::iterator minEl = usedLadders.begin();
                        if(heightDiff > *minEl){
                            usedBricks += *minEl;
                            usedLadders.insert(heightDiff);
                            // NOTE: using usedLadders.erase(*minEl) erases ALL instances
                            // of the value pointed by minEl;
                            // you need to erase only one instance of that value
                            usedLadders.erase(minEl);
                            inserted = true;
                        }   
                    }
                    else{
                        usedLadders.insert(heightDiff);
                        inserted = true; 
                    }
                }
                if(!inserted){
                    usedBricks += heightDiff;
                }
                if(usedBricks > bricks){
                    return i;
                }
            }
        }
        return heights.size()-1;
    }
};
