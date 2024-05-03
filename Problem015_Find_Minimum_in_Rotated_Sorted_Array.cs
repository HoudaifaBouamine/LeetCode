namespace Problem015;

public class Solution
    {

        public int binary_search(int[] nums,int min,int max)
        {

            if (min > max) return int.MaxValue;

            int mid = (max + min+1) / 2;
            int target = int.MaxValue;

            if (mid == 0)
            {
                target = nums[mid];
            }
            else if (nums[mid] < nums[mid - 1])
            {
                target = nums[mid];
            }
            else
            {
                target = Math.Min(binary_search(nums, mid+1, max),binary_search(nums,min,mid-1));
            }

            return target;
            
        }
        public int FindMin(int[] nums)
        {


            return binary_search(nums,0,nums.Length-1);


        }
    }
