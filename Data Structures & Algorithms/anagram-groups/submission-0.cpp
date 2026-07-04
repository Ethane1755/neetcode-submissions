#include <algorithm> 

auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
}();

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> Hash;
        vector<vector<string>> ans;

        for (auto& str : strs) {
            auto str1 = str;
            std::sort(str1.begin(), str1.end());
            Hash[str1].push_back(str);
        }

        for (auto& pair : Hash) {
            ans.push_back(pair.second);
        }

        return ans;
    }
};
