class TimeMap {
    unordered_map<string, vector<pair<int, string>>> mp;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        mp[key].push_back({timestamp, value});
    }
    
    string get(string key, int timestamp) {
        if (mp.find(key) == mp.end()) {
            return "";
        }
        if (timestamp < mp[key][0].first) {
            return "";
        }
        int low = 0;
        int high = mp[key].size() - 1;
        int mid = 0;
        while (low <= high) {
            mid = low + (high - low) / 2;
            if (mp[key][mid].first == timestamp) {
                return mp[key][mid].second;
            } else if (timestamp < mp[key][mid].first) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return mp[key][high].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */