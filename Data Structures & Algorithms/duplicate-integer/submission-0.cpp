auto init = []() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}();
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> duplicate;

        for (auto& num : nums) {
            if (!duplicate.count(num)) duplicate.insert(num);
            else return true;
        }
        return false;
    }
};