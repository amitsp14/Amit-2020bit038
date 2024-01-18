#include <iostream>
#include<bits/stdc++.h>


using namespace std;
int main()
{

    
vector<int>ip;

int n;
cout<<"enter array size : ";
cin>>n;

for (int i = 0; i < n; i++)
{
    int temp;
    cin>>temp;
    ip.push_back(temp);

}

vector<int>ans;

for (int i = 0; i < n; i++)
{
    if(ip[i]%2==0){
        ans.push_back(ip[i]);
    }
}

for (int i = 0; i < ans.size(); i++)
{
 cout<<ans[i]<<" ";

}



return 0;
}