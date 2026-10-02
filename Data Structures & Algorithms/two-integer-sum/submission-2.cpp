class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        vector<vector<int>>vec;

        for(int i=0;i<n;i++){
            vec.push_back({nums[i],i});
        }

        sort(vec.begin(),vec.end());

        int i=0;
        int j=n-1;

        while(i<j){
            if(vec[i][0] + vec[j][0] == target){
                if(vec[i][1] < vec[j][1])  return {vec[i][1],vec[j][1]};
                return {vec[j][1],vec[i][1]};
            }
            else if(vec[i][0] + vec[j][0] > target){
                j--;
            }
            else{
                i++;
            }
        }
        
    }
};
