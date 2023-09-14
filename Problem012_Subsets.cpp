
class Solution {
public:

    void backtraking(vector<int> tmplist,  int start)
    {
        for (int i = start; i < (int)nums.size(); i++)
        {
            tmplist.push_back(nums[i]);
            vec.push_back(tmplist);
            backtraking(tmplist, i + 1);
            tmplist.pop_back();
        }
    }

    vector<int> nums;
    vector<vector<int>> vec;

    vector<vector<int>> subsets(vector<int>& nums1) {

        nums = nums1;
        vector<int> tmplist;
        vec.push_back(tmplist);
        backtraking(tmplist, 0);

        return vec;
    }
};