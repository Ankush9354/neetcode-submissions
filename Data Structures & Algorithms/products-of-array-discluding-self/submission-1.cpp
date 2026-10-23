class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();

        vector<int>ans;   

        vector<long long>rTol;
        vector<long long>lTor;

        long long temp = 1;

        for(int i=0;i<n;i++){
            lTor.push_back(temp);
            temp *= nums[i];
        }  
        temp = 1;
        for(int i=n-1;i>=0;i--){
            rTol.push_back(temp);
            temp *= nums[i];
        }  

        reverse(rTol.begin(),rTol.end());

        for(int i=0;i<n;i++){
            ans.push_back((int)(rTol[i] * lTor[i]));
        }

        return ans;
    }
};
