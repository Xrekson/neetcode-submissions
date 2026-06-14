class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> in;
        for(const auto& it :nums){
            if(in.contains(it)){
                return true;
            };
            in.insert(it);
        };
        return false;
    };
};