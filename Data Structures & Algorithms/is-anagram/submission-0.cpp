auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    return 0;
} ();

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count (26, 0);

        for (auto& word : s) {
            count[word - 'a'] += 1;
        }

        for (auto& word : t) {
            count[word - 'a'] -= 1;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }
        return true;
    }
};
