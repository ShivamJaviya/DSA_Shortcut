#include <iostream>
using namespace std;

int main()
{
    int matrix[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}};

    int row = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    int count = 0;
    int total = row * col;

    //indexing
    int startingrow = 0;
    int startingcol = 0;
    int endingrow = row - 1;
    int endingcol = col - 1;

    while (count < total)
    {
        // Print starting row
        for (int index = startingcol; index <= endingcol && count < total; index++)
        {
            cout << matrix[startingrow][index] << " ";
            count++;
        }
        startingrow++;

        // Print ending column
        for (int index = startingrow; index <= endingrow && count < total; index++)
        {
            cout << matrix[index][endingcol] << " ";
            count++;
        }
        endingcol--;

        // Print ending row
        for (int index = endingcol; index >= startingcol && count < total; index--)
        {
            cout << matrix[endingrow][index] << " ";
            count++;
        }
        endingrow--;

        // Print starting column
        for (int index = endingrow; index >= startingrow && count < total; index--)
        {
            cout << matrix[index][startingcol] << " ";
            count++;
        }
        startingcol++;
    }

    return 0;
}
