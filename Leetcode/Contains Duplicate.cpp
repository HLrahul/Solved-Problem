class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> numCount;

        for (auto num: nums) {
            numCount[num]++;

            if (numCount[num] > 1) return true;
        }

        return false;
    }
};