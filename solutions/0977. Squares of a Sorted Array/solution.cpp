#include <math.h>

class Solution {
public:
 
// Returns index of the element closest to target in arr
int findClosest(vector<int>& arr, int n, int target){
    // Corner cases
  //left-side case
    if (target <= arr[0])
        return 0;
  //right-side case
    if (target >= arr[n - 1])
        return n - 1;
 
    // Doing binary search
    int i = 0, j = n, mid = 0;
    while (i < j) {
        mid = (i + j) / 2;
 
        if (arr[mid] == target)
            return mid;
 
        /* If target is less than array element,
            then search in left */
        if (target < arr[mid]) {
            // If target is greater than previous
            // to mid, return closest of two
            if (mid > 0 && target > arr[mid - 1])
                return getClosest(arr,mid - 1,mid, target);   
            j = mid;
        }
      /* Repeat for left half */
 
        // If target is greater than mid
        else {
            if (mid < n - 1 && target < arr[mid + 1])
                return getClosest(arr, mid,mid + 1, target);
            // update i
            i = mid + 1; 
        }
    }
 
    // Only single element left after search
    return mid;
}

int getClosest(vector<int>  v, int val1, int val2,int target){
    if (target - v[val1] >= v[val2] - target)
        return val2;
    else
        return val1;
}



    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res;
        int minIndex = findClosest(nums, nums.size(), 0);
        res.push_back(nums[minIndex]*nums[minIndex]);
        int l = minIndex - 1;
        int r = minIndex + 1;
        while(l >= 0 && r < nums.size()){
            
            if(abs(nums[l])<abs(nums[r])){
                res.push_back(pow(nums[l],2));
                l--;
            } 
            else{
                if (abs(nums[l]) == abs(nums[r])){
                    res.push_back(pow(nums[r],2));
                    l--;
                }
                res.push_back(pow(nums[r],2));
                r++;
            }
        }
        while(r >= nums.size() && l >= 0){
            res.push_back(pow(nums[l],2));
            l--;
        }
        while(l <= 0 && r < nums.size()){
            res.push_back(pow(nums[r],2));
            r++;
        }
        return res;
    }
};
