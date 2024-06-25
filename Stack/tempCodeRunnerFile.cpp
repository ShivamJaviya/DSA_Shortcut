#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    string enter;
    cin>>enter;

    if(enter.length()%2 == 1){
        return -1;
    }

    stack <char>s;
    for (int i = 0; i < enter.length(); i++)
    {
        char ch = enter[i];
        if(ch == '('){
            s.push(ch);
        }

        else{
            if(!s.empty() && s.top() == '('){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }

        int a = 0,b = 0;
        while(!s.empty()){
            if(s.top() == '('){
                b++;
            }
            else{
                a++;
            }
            s.pop();
        }

    int ans = (a+1)/2 + (b+2)/2;
    return ans;







    }
    
    return 0;
}