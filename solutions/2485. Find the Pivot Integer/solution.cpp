class Solution {
public:
    int pivotInteger(int n) {
        if(n == 1) return 1;
        if(n == 2) return -1;
        int rightSum = n;
        int x = n;
        while(x > n/2){
            if(rightSum == x*(x+1)/2){
                return x;
            }
            else{
                x--;
                rightSum += x;
            }
        }
        return -1;
    }
};
