using System.Runtime.CompilerServices;

namespace LeetCodeSolving.LeetCode.Problem016_Product_of_Array_Except_Self;

public class Solution {
    public int[] ProductExceptSelf(int[] nums)
    {
        var ns = nums.ToList();
        var zerosCount = ns.Count(n => n == 0);
        
        if (zerosCount >= 2) return nums.Select(n => 0).ToArray();

        if (zerosCount == 1)
        {
            var non_zeroList = ns.Where(n => n != 0);

            var result = 1;
            foreach (var n in non_zeroList)
            {
                result *= n;
            }

            return ns.Select(n => (n == 0) ? result : 0).ToArray();
        }

        var totalMul = 1;
        foreach (var n in ns)
        {
            totalMul *= n;
        }

        return ns.Select(n => totalMul / n).ToArray();

    }
}