#include<bits/stdc++.h>
using namespace std;
void tripsum(int arr1[],int arr2[], int arr3[],int size,int sum){

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if((arr1[i]+arr2[j]+arr3[k]) == sum)
                cout<<"("<<arr1[i]<<","<<arr2[j]<<","<<arr3[k]<<")"<<endl;
            }
            
        }
        
    }
    
}
int main()
{
     
    int arr1[] = {10, 20, 30, 40, 50, 60 , 70, 80};
    int arr2[] = {200, 300, 400, 500, 600 , 700, 800 ,900};
    int arr3[] = {1000,2000,3000,4000,5000,6000,7000,8000};
    int sum =7770;

    int size = sizeof(arr1)/sizeof(arr1[0]);
    tripsum(arr1,arr2,arr3,size,sum);
    return 0;
}