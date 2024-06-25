#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "Shivam Javiya";
    int count;
    

        for (int i = 0; i < str.length(); i++)
    {
        count = 1;
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j] && str[i] != ' ')
            {
                count++;
                str[j] = '0';
            }
        }
        if (count > 1 && str[i] != '0')
        {
            cout << str[i]<<" ";
        }
    }

    return 0;
}