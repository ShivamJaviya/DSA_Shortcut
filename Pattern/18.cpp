#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n=5;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
          cout<<" ";
        }
        int z=i;
        for (int k = 0; k < n-i ; k++)
        {
          cout<<z;
          z=z+1;

        }

        cout<<endl; 
        
    }
    
    
    return 0;
}





















