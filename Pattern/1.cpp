#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n=12;
    	int num = 1;

	// Outer loop to handle number of rows
	// n in this case
	for (int i = 0; i < n; i++) {
		// Inner loop to handle number of columns
		// values changing acc. to outer loop
		for (int j = 0; j <= i; j++)
			cout << num << " ";
		// Incrementing number at each column
		num = num + 1;
		// Ending line after each row
		cout << endl;
	}
    // unsigned int z=-5;
    // cout<<z;

    return 0;
}
