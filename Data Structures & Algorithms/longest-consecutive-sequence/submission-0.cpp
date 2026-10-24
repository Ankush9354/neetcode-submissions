class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        unordered_set<int>st(nums.begin(),nums.end());

        int ans = 0;

        for(int num : nums){
            if(st.find(num-1) == st.end()){
                 int len = 0;
                 int val = num;
                 while(st.find(val) != st.end()){
                    len++;
                    ans = max(ans,len);
                    val++;
                 }
            }
            else{
                continue;
            }
        }

        return ans;
    }
};
