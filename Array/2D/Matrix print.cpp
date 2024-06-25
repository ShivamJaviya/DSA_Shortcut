#include <bits/stdc++.h>
using namespace std;

bool fi(int matrix[4][3], int m, int n, int findkey)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == findkey)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int matrix[4][3];
    //int matrix[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    cout << "Enter the elements of the matrix (4x3):" << endl;
    for (int i = 0; i < 4; i++) // Loop over rows
    {
        for (int j = 0; j < 3; j++) // Loop over columns
        {
            cin >> matrix[i][j];
        }
    }

    cout << "The matrix is:" << endl;
    for (int i = 0; i < 4; i++) // Loop over rows
    {
        for (int j = 0; j < 3; j++) // Loop over columns
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    int findkey;
    cout << "Enter your find key: " << endl;
    cin >> findkey;

    // Corrected ternary operator within cout
    cout << (fi(matrix, 4, 3, findkey) ? "Found\n" : "Not Found\n");

    return 0;
}
