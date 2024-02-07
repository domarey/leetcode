class Solution {
public:
    string frequencySort(string s) {
        string alphabetDigits = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

      // array of zeros representing the frequency of each character (the order corresponds to the string alphabetDigits)
        vector<int> lettersDigits(alphabetDigits.size(),0);
      // count the frequecy of each character in s
        for(int i = 0; i < s.size(); ++i){
            auto foundElement = find(alphabetDigits.begin(), alphabetDigits.end(), s[i]); 
            lettersDigits[foundElement - alphabetDigits.begin()]++;
        }

      // store the frequencies in a set (to delete duplicates)
        set<int> frequencies;
        for(int i = 0; i < lettersDigits.size(); ++i){
            frequencies.insert(lettersDigits[i]);
        }
      
        string res = "";
      // loop through the set in reverse order
        for(set<int>::reverse_iterator rit = frequencies.rbegin(); rit != frequencies.rend(); rit++) {
            auto foundElement = find(lettersDigits.begin(), lettersDigits.end(), *rit); 

          // check if there are multiple characters with the same frequency
            while (foundElement != lettersDigits.end()) { 
                res += string(*rit, alphabetDigits[foundElement-lettersDigits.begin()]);  
                foundElement = find(foundElement + 1, lettersDigits.end(), *rit); 
            } 
        }
        return res;
    }
};
