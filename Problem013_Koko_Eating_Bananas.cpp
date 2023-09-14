
class Solution {
public:

    bool isEnough(vector<int>& p,int k , int h)
    {

        for (int i = 0; i < p.size(); i++)
        {
            if (h < 0)
                return false;

            if (k >= p[i])
            {
                h--;
            }
            else
            {
                h -= p[i] / k;
                h -= (p[i] % k == 0) ? 0 : 1;
            }

        }

        if (h < 0)return false;

        return true;

    }

  
    int minEatingSpeed(vector<int>& piles, int h) {

        
        int max = *max_element(piles.begin(), piles.end());
        int min = 1;

        while (max > min)
        {
            int mid = (max + min) / 2;

            if (isEnough(piles,mid,h))
            {
                max = mid;
            }
            else
            {
                min = mid + 1;
            }
        }

        return min;
    }
};
