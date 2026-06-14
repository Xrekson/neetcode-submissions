class Solution {
public:
    bool hasDuplicate(vector<int>& n) {
        unordered_set<int> in;
        for(const auto& i : n){
            if(in.contains(i)) return true;
            in.insert(i);
        };
        return false;
    };
};