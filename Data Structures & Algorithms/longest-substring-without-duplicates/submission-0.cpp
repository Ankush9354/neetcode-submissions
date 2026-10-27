class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        unordered_map<char,int>freq;

        int i=0;
        int j=0;

        int maxiLen = 0;

        while(j<n){
            freq[s[j]]++;
            while( i < n && freq[s[j]] > 1){
                freq[s[i]]--;
                if(freq[s[i]] == 0) {
                    freq.erase(s[i]);
                }
                i++;
            }

            maxiLen = max(maxiLen,j-i+1);
            j++;
        }
       return maxiLen;
    }
};
