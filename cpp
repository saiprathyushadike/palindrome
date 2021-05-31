#include <iostream>
#include<cstring>
#include  <bits/stdc++.h>
using namespace std;
int main() 
{
        string s,temp;
        cin>>s;
        int e=s.size()-1;
        int start=0;
        bool a;
        while(start<e)
        {
        if(s[start]=s[e])
        {
            a==1;
        }
        else
            a==0;
            break;
        start++;
        e--;
        }
        if(a==1)
            cout<<"palindrome";
        else
           cout<<"not palindrome"; 
           return 0;
}
 
