#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=500,b[10],i;

    for (i = 0; n > 0; i++)
    {

        b[i]=n%2;
        n=n/2;

    }

    for (i = i-1; i >= 0; i--)
    {
        cout<<b[i]<<" ";
    }
    

    
    return 0;
}