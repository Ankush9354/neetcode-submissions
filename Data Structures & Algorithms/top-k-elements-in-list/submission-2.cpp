class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;

        int n = nums.size();

        vector<vector<int>>vec(n+1);

        unordered_map<int,int>freq;

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        for(auto it : freq){
            vec[it.second].push_back(it.first);
        }

        // sort(vec.begin(),vec.end());
        
        // for(int i=0;i<k;i++){
        //     ans.push_back(vec[vec.size()-i-1].second);
        // }
        
       for(int  i=n;i>=1;i--){
          for(int num : vec[i]){
            if(k > 0){
               ans.push_back(num);
               k--;
            }
             else if(k==0) break;
          }

       }
        return ans;
    }
};
