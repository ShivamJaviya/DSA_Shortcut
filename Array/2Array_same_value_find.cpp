// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int size =9;
//     int arr1[size] = {10, 20, 30, 40, 50, 60 , 70, 80};
//     int arr2[size] = {200, 300, 400, 500, 600 , 700, 800 ,10};

//     for (int i = 0; i < size; i++)
//     {
//         for (int j = 0; j < size; i++)
//         {
//             if(arr1[i]==arr2[j])
//             {
//                 cout<<arr2[j];
//             }
//         }
        
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size =9;
    int arr1[size] = {10, 20, 30, 40, 50, 60 , 70, 80};
    int arr2[size] = {200, 300, 400, 500, 600 , 700, 800 ,10};

    sort(arr1,arr1 + size);

    for (int i = 0; i < size; i++)
    {
        if(isexist(arr[i]))
    }
    
    return 0;
}

bool isexist(int arr[], int found) {

    int start = 0;
    int end = (sizeof(arr) / sizeof(int))-1;
    int mid = (start + end)/2;    
   
    while (start <= end)
    {
        if(arr[mid] == found) 
        {
            return true;
        } else if(arr[mid] > found) {
            end = mid - 1;

        } else {
            start = mid + 1;
        }
    }

    

}