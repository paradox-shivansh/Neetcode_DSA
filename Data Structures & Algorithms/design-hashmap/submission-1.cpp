class MyHashMap {
public:
    vector<vector<int>> v;
    MyHashMap() {
        v.resize(2);
    }
    
    void put(int key, int value) {
        
        for(int j=0;j<v[0].size();j++){
            if(v[0][j] == key){
                v[1][j] = value;
                return;
            }
        }

        // Key doesn't exist, so add it
        v[0].push_back(key);
        v[1].push_back(value);
    }
    
    int get(int key) {
        int ans;
        for(int j=0;j<v[0].size();j++){
            if(v[0][j] == key){
                ans = v[1][j];
                return ans;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        for(int j=0;j<v[0].size();j++){
            if(v[0][j] == key){
                v[0].erase(v[0].begin()+j);
                v[1].erase(v[1].begin()+j);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */