#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]= "big";
    m[10]= "brother";
    m[100]= "Akaykumar";

    m.insert({1000,"Kartik Ariny"});

    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding "<<m.count(1000)<<endl;

    m.erase(100);
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }



    return 0;
}