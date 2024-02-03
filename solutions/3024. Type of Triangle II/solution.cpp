class Solution {
public:
    string triangleType(vector<int>& nums) {
        // check if the given numbers can form a triangle
        for(vector<int>::iterator it1 = nums.begin(); it1 != nums.end(); it1++){
            int sidesSum = 0;
            for(vector<int>::iterator it2 = nums.begin(); it2 != nums.end(); it2++){
                if(it1!=it2){
                    sidesSum += *it2;
                }
            }
            if(sidesSum <= *it1){
                return "none";
            }
        }
      
        // check the type of triangle
        for(vector<int>::iterator it1 = nums.begin(); it1 != nums.end(); it1++){
            int count = 0;
            for(vector<int>::iterator it2 = nums.begin(); it2 != nums.end(); it2++){
                if(it1!=it2){
                    if(*it1 == *it2){
                        count++;
                    }
                }
            }
            if(count == 2){
                return "equilateral";
            }
            else if (count == 1){
                return "isosceles";
            }
        }
        return "scalene";
    }
};
