class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        if(n != m)  return false;

        // int i=0;
        // int j = 0;

        // unordered_map<char,int>freq1;
        // unordered_map<char,int>freq2;

        vector<int>freq(26,0);
        
        for(int i=0;i<n;i++){
            freq[s[i] - 'a']++;
            freq[t[i] - 'a']--;
        }

        for(int i=0;i<26;i++){
            if(freq[i] != 0) return false;
        }

        return true;
    }
};
