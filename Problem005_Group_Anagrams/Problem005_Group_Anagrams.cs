using System.Collections;

namespace Problem005;

public class Solution {
    public IList<List<string>> GroupAnagrams(string[] strs)
    {
        var gs = strs.GroupBy(strs=>string.Concat(strs.Order()));

        IList<List<string>> wow = gs.Select(g => g.Select(e => e).ToList()).ToList();
        return wow;
    }
}