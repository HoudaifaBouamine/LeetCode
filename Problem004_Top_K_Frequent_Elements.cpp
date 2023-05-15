class Solution {
public:

    void fill_vec(vector<int>& nums,vector<pair<int, int>>& v) {
        map <int, int> m;

        for (int n : nums)
            m[n]++;

        
        for (pair<int, int> e : m)
            v.push_back({ e.second,e.first });
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<pair<int, int>> v;
        fill_vec(nums, v);
        sort(v.rbegin(), v.rend());
        vector<int> v2;
        for (size_t i = 0; i < k; i++)
            v2.push_back(v[i].second);

        return v2;
    }
};

