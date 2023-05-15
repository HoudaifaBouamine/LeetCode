class Solution {
public:


    string same(string s) {

        sort(s.begin(), s.end());
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map <string, list<int>> m;

        for (int i = 0; i < strs.size(); i++) {
            m[same(strs[i])].push_back(i);
        }

        vector<vector<string>> result;
        vector<string> r;
        for (auto& x : m) {
              
            r.clear();
            while (x.second.size()) {

                r.push_back(strs[x.second.front()]);
                x.second.pop_front();
            }

            result.push_back(r);
        }

        return result;
    }
};

