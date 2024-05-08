namespace Problem003;


// not solved yet
public class Solution {
    public int[] TwoSum(int[] nums, int target)
    {
        var numbers = nums.Select((n, index) => (n, index)).ToArray();
        Array.Sort(numbers,(num1,num2)=>num1.n.CompareTo(num2.n) );

        var i = 0;
        var j = nums.Length - 1;

        while (i < j)
        {
            var r = numbers[i].n + numbers[j].n;
            if (r == target) return new[] { i, j };
            if (r < target) i++;
            if (r > target) j--;
        }

        throw new Exception("Not result is found, check the sorting");
    }
}