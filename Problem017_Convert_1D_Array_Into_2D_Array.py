class Solution:
    def construct2DArray(self, original: List[int], m: int, n: int) -> List[List[int]]:
        cols, rows = (n,m)

        if(cols * rows < len(original)):
            return []

        arr = [[0]*cols]*rows

        col = 0
        row = 0

        for a in original:
            arr[row][col] = a
            col = col+1

            if col == cols:
                row = row+1
                col = 0

        return arr
