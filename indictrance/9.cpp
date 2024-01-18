#include <iostream>

using namespace std;
int main()
{
string s1;
cin>>s1;

string s2;
cin>>s2;

string s3;
cin>>s3;

int ct=0;

for (int i = 0; i < s1.length(); i++)
{
    if (s1[i]==s2[i]==s3[i])
    {
        ct++;
    }
    else{
        break;
    }
}

cout<<ct;

return 0;
}