class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;

        unordered_map<char,int>freq1;

        for(char ch : s1){
            freq1[ch]++;
        }

        unordered_map<char,int>freq2;

        int i=0;
        int j=0;

        while(j < s2.length()){
          freq2[s2[j]]++;
          if(j-i+1 == s1.size()) {
            if(freq1  == freq2) return true;

            freq2[s2[i]]--;
            if(freq2[s2[i]] == 0){
                freq2.erase(s2[i]);
            }
             i++;
          }
             j++;
        }
        
        return false;
    }  
};
