#define pow_2(x) (x) * (x)
#define same(a,b) (a) == (b) || (pow_2((a) - (b)) == 1024 && (a >= 65 && b >= 65))
#define ispun(a) a == ' ' || ispunct(a)

class Solution {

public:
    bool isPalindrome(string s) {

        int i = 0, j = s.length() - 1;
        while (i < j)
        {
            if (same(s[i], s[j]))
            {
                ++i; --j;
            }
            else
            {

                if (!(ispun(s[i]) || ispun(s[j])))
                    return false;

                i += ispun(s[i]);
                j -= ispun(s[j]);
            }
        }

        return true;
    }
};