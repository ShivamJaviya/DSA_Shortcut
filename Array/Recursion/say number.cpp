#include<bits/stdc++.h>
using namespace std;
void saydigit(int n,int arr[])
{
    if(n == 0)
    {
        return ;
    }

    int digit =n%10;
    n=n/10;

    saydigit(n,arr);

    cout<<arr[digit];
}
int main()
{
    int num;
    cin>>num;

    int arr[10]= {"zero", "one","two","three","four","five","six","seven","eight","nine"};

    saydigit(num,arr);

    return 0;
}