class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        std::unordered_map<char,int> t1;
        std::unordered_map<char,int> t2;
        for (int i = 0; i < s.length(); i++) {
            t1[s[i]]++;
            t2[t[i]]++;
        }
        bool out = t1 == t2;
        return out;

    }
};
