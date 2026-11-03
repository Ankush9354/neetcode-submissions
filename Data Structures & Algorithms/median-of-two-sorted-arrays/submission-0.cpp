class Solution {
   public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        int m = nums1.size();

        int size = n + m;

        int i = 0;
        int j = 0;

        vector<int>temp;

        while (i < m && j < n) {
            if (nums1[i] > nums2[j]) {
                // swap(nums[i], nums[j]);
                // i++;
                // j++;
                temp.push_back(nums2[j]);
                j++;
            } else { 
                temp.push_back(nums1[i]);
                i++;
            }
        }
        
        while(i < m){
            temp.push_back(nums1[i]);
            i++;
        }
        while( j < n){
            temp.push_back(nums2[j]);
            j++;
        }

        int low = 0;
        int high = n+m;

        if(size % 2 == 1){
           return (double)temp[size/2];
        }

        int first = size/2 - 1;
        int second = size/2;

        return ((double)temp[first] + (double)temp[second])/2;
        
    }
};
