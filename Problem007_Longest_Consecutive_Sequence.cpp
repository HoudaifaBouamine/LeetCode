class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if (nums.size() == 0)return false;

        sort(nums.begin(), nums.end());

        int index = 0;
        int max = 1;
        int tmp_max = 1;

        while (index < nums.size() - 1) {

            if (nums[index + 1] - nums[index] == 0) {
                index++;
                continue;
            }
            if (nums[index + 1] - nums[index] != 1)
            {
                if (max < tmp_max) max = tmp_max;
                tmp_max = 0;
            }

            index++;
            tmp_max++;
        }

        if (max < tmp_max) max = tmp_max;

        return max;
    }
};