namespace Problem003;


// not solved yet
public class Solution {
    public int[] TwoSum(int[] nums, int target)
    {
        var l = nums.Select(n => target - n).Intersect(nums).Where(n=>n*2 != target);
        var n1 = l.First();
        var i1 = Array.IndexOf(nums, n1);
        nums[i1] = int.MaxValue;
        var i2 = Array.IndexOf(nums, target - n1);
        
        return new []{i1,i2};
        
    }
}