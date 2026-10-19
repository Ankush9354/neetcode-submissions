class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        vector<vector<string>>ans;

        unordered_map<string,vector<string>>mp;

        for(int i=0;i<n;i++){
            vector<int>freq(26,0);

            for(char ch : strs[i]){
                freq[ch - 'a']++;
            }

            string key = "";

            for(int i=0;i<26;i++){
                key += to_string(freq[i]) + "#";
            }
            mp[key].push_back(strs[i]);
        }

        for(auto it : mp){
            ans.push_back(it.second);
        }

        return ans;
    }
};
