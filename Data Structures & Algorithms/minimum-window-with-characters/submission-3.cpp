class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int m = t.length();
        
        int ans = INT_MAX;

        int i = 0;
        int j = 0;
        
        unordered_map<char,int>freq1;

        for(char ch : t){
            freq1[ch]++;
        }

        unordered_map<char,int>freq2;
        int start = -1 ;
        int end = -1;

        int cnt = 0;

        while(j<n){
           freq2[s[j]]++;
           if(freq1.find(s[j]) != freq1.end() && freq2[s[j]] <= freq1[s[j]]) {
              cnt++;
            }

           while(i < n && cnt == t.size()){
              if(ans > j-i+1){
                ans = j-i+1;
                end = j;
                start = i;
              }
              if(freq1.find(s[i]) != freq1.end() && freq2[s[i]] <= freq1[s[i]]){
                cnt--;
              }
              freq2[s[i]]--;
              
              if(freq2[s[i]] == 0){
                freq2.erase(s[i]);
              }
              i++;
           }
           j++;
        }
        
        if(start == -1 && end == -1) return "";
        return s.substr(start,end-start+1);
    }
};
