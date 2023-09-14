class Solution {
public:
    int trap(vector<int>& height) {
        
        int * arr = (int*)malloc(height.size() * sizeof(int));

        int Max = 0;

        for(int i = 0;i < height.size();i++)
        {
            if(height[i] > Max)
            {
                Max = height[i];
            }

            arr[i] = Max;
        }

        Max = 0;
        int total = 0;

        for(int i = height.size() - 1;i >= 0 ;i--)
        {
            if(height[i] > Max)
            {
                Max = height[i];
            }

            if(arr[i] > Max)
                total += Max - height[i];
            else
                total += arr[i] - height[i];
        }


        return total;
    }
};