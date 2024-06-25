#include <iostream>  
using namespace std;  
int main() {  
int numbers[5] = {7, 5, 6, 12, 35};  
cout << "The numbers are: ";  
//  Printing array elements  
// using range-based for loop  
for (const int &n : numbers) {  
cout << n << "  ";  
}  
cout << "\nThe numbers are: ";  
//  Printing array elements  
// using traditional for loop  
for (int i = 0; i < 5; ++i) {  
cout << numbers[i] << "  ";  
}  
return 0;
}  


// C++ Program to Print Array Elements without Indexing 
#include <iostream> 
using namespace std; 

int main() 
{ 

//  Define an array 
// 	int arr[] = { 11, 22, 33, 44 }; 

// 	// Print elements of an array 
// 	cout << "first element: " << *arr << endl; 
// 	cout << "Second element: " << *(arr + 1) << endl; 
// 	cout << "Third element: " << *(arr + 2) << endl; 
// 	cout << "fourth element: " << *(arr + 3) << endl; 

// 	return 0; 
// }

