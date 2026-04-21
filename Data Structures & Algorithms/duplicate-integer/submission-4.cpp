class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // Brute Force Solution
        /*
        int size = nums.size();

        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if (nums[i] == nums[j])
                {
                    return true;
                }
            }
        }
        return false;
        */

        // Solution Using Sets
        std::unordered_set <int> mySet;
        int size2 = nums.size();
        for (int i =0; i < size2; i++)
        {
            auto result = mySet.insert(nums[i]);
            if (result.second == false)
            {
                return true;
            }
        }
        return false;
        
    }
};