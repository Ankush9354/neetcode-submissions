class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.size();
        int m = t.size();

        if(n != m)  return false;

        int i=0;
        int j = 0;

        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        
        for(int i=0;i<n;i++){
            freq1[s[i]]++;
            freq2[t[i]]++;
        }

        for(int i=0;i<n;i++){
            if(freq1[s[i]] != freq2[s[i]]) return false;
        }

        return true;
    }
};
