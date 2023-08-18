#include <iostream>

using namespace std;


void printSudoku(int board[9][9]){

    for (int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

bool Valid(int board[9][9], int r,
           int c, int num)
{
    if (board[r][c] != 0) return false;
    bool stat = true;
    int boardx = (c / 3) * 3;
    int boardy = (r / 3) * 3;
    for (int i = 0; i < 9; i++){
        if (board[r][i] == num){
            stat = false; break;
        }
        if (board[i][c] == num){
            stat = false; break;
        }
        if (board[boardy + i / 3][boardx + i % 3] == num){
            stat = false; break;
        }

    }
    return stat;
}


bool SudukoSolver(int board[9][9], int r, int c)
{

    if (r == 9 - 1 && c == 9)
        return true;


    if (c == 9) {
        r++;
        c = 0;
    }


    if (board[r][c] > 0)
        return SudukoSolver(board, r, c + 1);

    for (int num = 1; num <= 9; num++)
    {


        if (Valid(board, r, c, num))
        {

            board[r][c] = num;


            if (SudukoSolver(board, r, c + 1))
                return true;
        }


        board[r][c] = 0;
    }
    return false;
}


int main()
{

    int board[9][9];

    for (int r = 0; r < 9; r++){
        for (int c = 0; c < 9; c++){
            cin >> board[r][c];
        }
    }

    if (SudukoSolver(board, 0, 0))
        printSudoku(board);

    return 0;

}
