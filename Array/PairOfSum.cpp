#include<bits/stdc++.h>
using namespace std;
void pairofsum(int arr[], int size,int sum){

    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(arr[i] + arr[j] == sum){
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
        
    }
    
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60 , 70, 80, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 60;
    pairofsum(arr,size,sum);
    return 0;
}