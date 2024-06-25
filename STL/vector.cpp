    #include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5,1);

    for(int i:v)
    {
        cout<<i<<" ";
    }


    vector<int> first;

    first.push_back(2);
    cout<<"First Vector :";
    for(int i:first)
    {
        cout<<i<<" ";
    }
    first.push_back(3);
    first.push_back(4);
    first.push_back(5);
    first.push_back(6);
    cout<<"\n Size of First : "<<first.size();
    cout<<"\n Capacity of First : "<<first.capacity();
    cout<<"\n MAX SIZE of First : "<<first.max_size();


    cout<<"\n Vector First id Empty : "<<first.empty();

    cout<<"\n Vector First in Element at 0 index : "<<first.front();
    cout<<"\n Vector First in Element at last index : "<<first.back();
    cout<<"\n Vector First in Element at 2 index : "<<first.at(2);

    first.pop_back();
    cout<<"\n Before POP in Vector ";
    for(int i:first)
    {
        cout<<i<<" ";
    }

    first.pop_back();

    cout<<"\n After POP in Vector ";
    for(int i:first)
    {
        cout<<i<<" ";
    }


    //erase

    first.clear();

    for(int i=1;i<=10;i++) first.push_back(i);

    
    cout<<"\n Before ERASE in Vector ";
    for(int i:first)
    {
        cout<<i<<" ";
    }

    first.erase(first.begin()+4); // only 5th remove
    first.erase(first.begin(),first.begin()+3); // first 3 value remove 

    cout<<"\n After ERASE in Vector ";
    for(int i:first)
    {
        cout<<i<<" ";
    }

    cout<<"\n Finding by Binary Search Algorithm : "<<binary_search(first.begin(),first.end(),10);
    cout<<"\n Finding by Upper bound Algorithm : "<<upper_bound(first.begin(),first.end(),6)-first.begin();
    cout<<"\n Finding by Lowerbound Algorithm : "<<lower_bound(first.begin(),first.end(),10)-first.begin();

    cout<<"\n Max Element in First : "<<*max_element(first.begin(),first.end());
    cout<<"\n Min Element in First : "<<*min_element(first.begin(),first.end());
    reverse(first.begin(),first.end());
    cout<<"\n After Reverse"<<endl;
    for(int i:first)
    {
        cout<<i<<" ";
    }
    

    
    return 0;
}


