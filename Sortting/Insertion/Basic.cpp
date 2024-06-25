#include<bits/stdc++.h>
using namespace std;
int insertion(vector<int> &v)
{
    int n = v.size();

    for(int i=1;i<n;i++)
    {

        int j=i-1,temp=v[i];

        for(;j>=0;j--)
        {
            if(v[j]>temp)
            {
                v[j+1]=v[j];
            }
            else{
                break;
            }
        }
        v[j+1]=temp;
    }

}
int main()
{
    vector<int> v;
    v.push_back(5);
    v.push_back(15);
    v.push_back(10);
    v.push_back(1);
    v.push_back(3);

    cout<<"Before Sorting : "<<endl;
    for(int i:v) cout<<i<<" ";

    insertion(v);

    cout<<"\n After Sorting : "<<endl;
    for(int i:v) cout<<i<<" ";

    return 0;
}