class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        
        return isValidRows(board) && isValidColms(board) && isValidSquares(board);


    }

private :

    bool isValidRows(vector<vector<char>>& board) {

        char repeat[9];

        for (char row = 0; row < 9; row++) {

            memset(repeat, 0, 9);

            for (char colm = 0; colm < 9; colm++) {

                if (board[row][colm] == '.') continue;

                if (!repeat[board[row][colm] - 49])
                    repeat[board[row][colm] - 49] = 1;
                else
                    return false;
            }

        }

        return true;
    }

    bool isValidColms(vector<vector<char>>& board) {

        char repeat[9];

        for (char colm = 0; colm < 9; colm++) {

            memset(repeat, 0, 9);


            for (char row = 0; row < 9; row++) {

                if (board[row][colm] == '.') continue;

                if (!repeat[board[row][colm] - 49])
                    repeat[board[row][colm] - 49] = 1;
                else
                    return false;
            }



        }


        return true;
    }

    bool isValidSquares(vector<vector<char>>& board) {

        char repeat[9];

        for (char squareRow = 0; squareRow < 3; squareRow++) {

            for (char squareColm = 0; squareColm < 3; squareColm++) {

                memset(repeat, 0, 9);


                for (char colm = 0; colm < 3; colm++) {

                    for (char row = 0; row < 3; row++) {


                        if (board[squareRow * 3 + row][squareColm * 3 + colm] == '.') continue;


                        if (!repeat[board[squareRow * 3 + row][squareColm * 3 + colm] - 49])
                            repeat[board[squareRow * 3 + row][squareColm * 3 + colm] - 49] = 1;
                        else
                            return false;
                    }

                }

            }

        }

        return true;
    }
};