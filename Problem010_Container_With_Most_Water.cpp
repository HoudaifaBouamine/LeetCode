class Solution {
public:
    int maxArea(vector<int>& height) {
        
        int Max = 0;

        int pointer_1 = 0,pointer_2 = height.size()-1;
        int min_line;
        
        while(pointer_1 < pointer_2)
        {
            min_line = min(height[pointer_1] , height[pointer_2]);

            if(min_line * (pointer_2-pointer_1) > Max)
            {
                Max = min_line * (pointer_2-pointer_1);
            }

            if(height[pointer_1] < height[pointer_2])
            {
                pointer_1++;
            }
            else if(height[pointer_1] > height[pointer_2])
            {
                pointer_2--;
            }
            else 
            {
                if(height[pointer_1 + 1] > height[pointer_2 -1])
                {
                    pointer_1 ++;
                }
                else
                {
                    pointer_2--;
                }
            }
        }

        return Max;
    }
};