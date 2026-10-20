class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;

        int n = nums.size();

        vector<pair<int,int>>vec;

        unordered_map<int,int>freq;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        for(auto it : freq){
            vec.push_back({it.second,it.first});
        }

        sort(vec.begin(),vec.end());
        
        for(int i=0;i<k;i++){
            ans.push_back(vec[vec.size()-i-1].second);
        }

        return ans;
    }
};
