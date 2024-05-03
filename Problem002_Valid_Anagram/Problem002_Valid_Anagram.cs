
namespace Problem002;

public class Solution {
    public bool IsAnagram(string s, string t)
    {
        return string.Concat( s.Order() ) == string.Concat( t.Order() );
    }
}