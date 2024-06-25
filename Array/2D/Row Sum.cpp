#include <bits/stdc++.h>
using namespace std;

void sum(int matrix[4][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        int temp=0;
        for (int j = 0; j < n; j++)
        {
            temp+=matrix[i][j];
        }
        cout<<temp;
    }
}

void largestsum(int matrix[4][3], int m, int n)
{

    int max = INT_MIN;
    for (int i = 0; i < m; i++)
    {
        int temp=0;
        for (int j = 0; j < n; j++)
        {
            temp+=matrix[i][j];
        }
        cout<<temp;
    }

    if(sum>max)
    {
        max=sum;
    }

    cout<<"\n Max Sum is : "<<max<<endl;
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


        sum(matrix,4,3);
        largestsum(matrix,4,3);




    return 0;
}
