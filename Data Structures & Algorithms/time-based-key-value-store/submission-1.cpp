class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>>hashmap;
    TimeMap() {
        
    }
    
    void set(string key, string value, int timestamp) {
        hashmap[key].push_back({timestamp,value});
        
    }
    
    string get(string key, int timestamp) {
        vector<pair<int,string>>&vec = hashmap[key];

        int low = 0;
        int high = vec.size()-1;

        string ans = "";

        while(low <= high){
            int mid = (low + high)/2;

            // if(vec[mid].first == timestamp) {
            //     return vec[mid].second;
            // }
            if(vec[mid].first <= timestamp){
                low = mid + 1;
                 ans = vec[mid].second;
            }
            else{
                high = mid - 1;
               
            }
        }
        return ans;
    }
};
