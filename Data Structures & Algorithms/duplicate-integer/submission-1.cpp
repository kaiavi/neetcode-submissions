class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {

        set<int> data;

        for (int i = 0; i < nums.size(); i++)
        {
            if (data.count(nums[i]) == 0) data.insert(nums[i]);
            else return true;
        }
        return false;

    }
};
