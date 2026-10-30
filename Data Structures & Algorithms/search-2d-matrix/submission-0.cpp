class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<int>temp;

        for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
            temp.push_back(matrix[i][j]);
          }
        }
       int k = temp.size();
       int low = 0;
        int high = k-1;

        while(low <= high){
            int mid = (low + high)/2;

            if(temp[mid] == target){
                return true;
            }
           else if(temp[mid] > target){
            high = mid-1;
           }
           else low = mid+1;
        }

        return false; 
    }
};
