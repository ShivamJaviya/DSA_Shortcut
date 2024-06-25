#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=5,i=1;

    while(i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
    return 0;
}