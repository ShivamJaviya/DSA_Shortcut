#include<bits/stdc++.h>
using namespace std;
int hashhh[1000];
int main()
{
    string name;
    cin>>name;
    for(int i = 0; i < name.length(); i++) {
        hashhh[(int)name[i]]++;
    }
    char s;
    cout<<"What character frequecy you want?"<<endl;
    cin>>s;
    cout<<hashhh[(int)s]<<endl;

    return 0;
}