#include <bits/stdc++.h>
using namespace std;

void waveprint(int matrix[4][3], int m, int n)
{
        for(int i=0;i<n;i++)
        {
            if(i&1)
            {
                for(int j=m-1;j>=0;j--)
                {
                    cout<<matrix[j][i]<<" ";
                }
                cout<<endl;
            }

            
            else{
                for(int j=0;j<m;j++)
                {
                    cout<<matrix[j][i]<<" "; 
                }
                cout<<endl;
            }
        }
}

int main()
{
    //int matrix[4][3];
    int matrix[4][3] = {1,2,3,4,5,6,7,8,9,10,11,12};

    // cout << "Enter the elements of the matrix (4x3):" << endl;
    // for (int i = 0; i < 4; i++) // Loop over rows
    // {
    //     for (int j = 0; j < 3; j++) // Loop over columns
    //     {
    //         cin >> matrix[i][j];
    //     }
    // }

    cout << "The matrix is:" << endl;
    for (int i = 0; i < 4; i++) // Loop over rows
    {
        for (int j = 0; j < 3; j++) // Loop over columns
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
    cout<<endl;



waveprint(matrix,4,3);

    return 0;
}
