class MyHashSet {
public:
    vector<int> v;
    MyHashSet() {
        
    }
    
    void add(int key) {
        bool flag=true;
        for(auto i:v){
            if(i==key){
                flag = false;
                break;
            }
        }

        if(flag == true){
            v.push_back(key);
        }
    }
    
    void remove(int key) {
        for(int i=0;i<v.size();i++){
            if(v[i]==key){
                v.erase(v.begin()+i);
            }
        }
    }
    
    bool contains(int key) {
        bool flag=false;
        for(auto i:v){
            if(i==key){
                flag = true;
                break;
            }
        }

        return flag;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */