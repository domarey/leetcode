class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto word : words){
            int i = 0;
            int j = word.size()-1;
            while(i < (float)word.size()/2 && j > (float)word.size()/2-1){
                if(word[i] == word[j]){
                    i++;
                    j--;
                    if(i>=j){
                        return word;
                    }
                }
                else{
                    break;
                }
            }
        }
        return "";
    }
};
