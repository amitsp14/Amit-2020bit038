#include <iostream>
#include<bits/stdc++.h>


using namespace std;

int palindrome(int n){

    if(n==0){
        return 1;
    }

    return n*palindrome(n-1);
}

int main()
{
int n ;
cin>>n;
cout<<palindrome(n);

return 0;
}