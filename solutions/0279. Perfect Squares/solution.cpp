class Solution {
public:
    int numSquares(int n) {
        // generate the perfect squares
        vector<int> squares;
        for(int i = 1; i < floor(sqrt(n))+1; i++){
            squares.push_back((int)pow(i,2));
        }
        vector<int> costs = {0,1,2,3};
        for(int i = 4; i < n+1; i++){
            // i is a perfect square
            if (ceil((double)sqrt(i)) == floor((double)sqrt(i))) {
                costs.push_back(1);
            }
            else{
                int remainder;
                vector<int> eligibleCosts;
                for(int j = 0; j < squares.size(); j++){
                    if(squares[j] < i){
                        remainder = i - squares[j];
                        eligibleCosts.push_back(costs[remainder]+1);
                    }
                }
                costs.push_back(*min_element(eligibleCosts.begin(),eligibleCosts.end()));
            }
        }
        return costs[n];
    }
};
