auto init = []() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	return 0;
}();
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> Map;

		for (int i = 0; i < nums.size(); i++) {
			int complement = target - nums[i];
			if (Map.count(complement)) {
				return {Map[complement], i};
			} else {
				Map[nums[i]] = i;
			}
		}
		return {};
    }
};
