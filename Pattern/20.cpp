#include<bits/stdc++.h>
using namespace std;
int main()
{
 
 int n;
 cin>>n;
 int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<i<<" ";
            j=j+1;
        }
        cout<<endl;
        i=i+1; 
    }
     


    int a=1;

    while (a<=n)
    {
        int j=1;
        while (j<=n)
        {
            cout<<j<<" ";
            j=j+1;
        }
        cout<<endl;
        a=a+1; 
    }
int u=1;
    while (u<=n)
    {
            int j=1;
            while (j<=n)
            {
              cout<<n-j+1<<" ";
              j=j+1;
            }
            cout<<endl;

        u=u+1;
            
    }
 


 return 0;
}

// 1111
// 2222
// 3333
// 4444