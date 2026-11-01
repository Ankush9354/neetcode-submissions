class Solution {
public:
    long long numOfHours(vector<int> piles, int speed){
        int n = piles.size();

        long long ans = 0;

        for(int i=0;i<n;i++){
            ans += (piles[i] + speed - 1)/speed;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int ans = -1;
        int low = 1;
        int high = INT_MIN ;

        for(int i=0;i<n;i++){
            high = max(high,piles[i]);
        }
        
        
        while(low <= high){
            int mid = (low + high)/2;

            long long hrs = numOfHours(piles,mid);

           if (hrs <= h) {
                ans = mid;
                high = mid-1;
            }
            else low = mid + 1;
        }

        return ans;
    }
};
