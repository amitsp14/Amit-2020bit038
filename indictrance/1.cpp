
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;

    int n = s.length();

    int i=0;
    int j = n-1;

    while (i<j)
    {
     char temp;
     temp = s[i];
     s[i]=s[j];
     s[j]= temp;
    
     i++;
     j--;

    }
    cout<<s;
    

return 0;
}