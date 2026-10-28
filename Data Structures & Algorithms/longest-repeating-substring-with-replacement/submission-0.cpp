class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size();

        int ans = 0;

        int i = 0;
        int j = 0;
        int maxFreq = 0;

        unordered_map<char,int>freq;

        while(j<n){
            freq[s[j]]++;
            
            maxFreq = max(maxFreq,freq[s[j]]);

            int windowLen = j-i+1;

            if(windowLen - maxFreq > k){
                freq[s[i]]--;
                i++;
            }
            
            ans = max(ans,j-i+1);
            j++;
        }
 
        return ans;        
    }
};
