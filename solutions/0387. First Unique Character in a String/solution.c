int firstUniqChar(char* s) {
  // array of zeros
    int alphabet[26] = {0};
  // count frequency of each letter in s
    for(int i = 0; i < strlen(s); ++i){
        alphabet[s[i]-'a']++;
    }
    for(int i = 0; i < strlen(s); ++i){
        if(alphabet[s[i]-'a'] == 1){
            return i;
        }
    }
    return -1;
}
