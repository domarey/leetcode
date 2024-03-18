bool comparePoints(vector<int> v1, vector<int> v2){
        return (v1[0] < v2[0]);
}
class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), comparePoints);
        vector<vector<int>> intervals;
        vector<int> currInterval = points[0];
        for(vector<vector<int>>::iterator it = points.begin()+1; it != points.end(); it++){
            if((*it)[0] <= currInterval[1] ){
                currInterval[0] = (*it)[0];
                if(currInterval[1] > (*it)[1]) currInterval[1] = (*it)[1];
            } else{
                intervals.push_back(currInterval);
                currInterval = *it;
            }
        }
        intervals.push_back(currInterval);
        return intervals.size();
    }
};
