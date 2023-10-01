public class Solution {
    
    public bool SearchMatrix(int[][] matrix, int target)
    {

        int MinRow = 0, MaxRow = matrix.Length - 1;

        int MidRow = (MaxRow + MinRow) / 2;

        int TargetRow = -1;

        while(MinRow <= MaxRow)
        {
            MidRow = (MaxRow + MinRow) / 2;


            if(MidRow == matrix.Length-1)
            {
                TargetRow = MidRow;
                break;
            }
            else if (matrix[MidRow][0] <= target && matrix[MidRow + 1][0] > target)
            {
                TargetRow = MidRow;
                break;
            }
            else if(matrix[MidRow][0] > target)
            {
                MaxRow = MidRow - 1;
            }
            else if(matrix[MidRow + 1][0] <= target)
            {
                MinRow = MidRow+1;
            }
        }

        if (TargetRow == -1)
        {
            return false;
        }

        int MinColm = 0 , MaxColm = matrix[0].Length-1;
        int MidColm = (MaxColm + MinColm) / 2;

        while(MinColm <= MaxColm )
        {
            MidColm = (MaxColm + MinColm) / 2;

            if(matrix[TargetRow][ MidColm] == target)
            {
                return true;
            }
            else if (matrix[TargetRow][MidColm] > target)
            {
                MaxColm = MidColm - 1;
            }
            else if (matrix[TargetRow][MidColm] <  target)
            {
                MinColm = MidColm + 1;
            }
        }

        return false;
    }

}