#include <iostream>
#include<bits/stdc++.h>
#include<unordered_map>


using namespace std;

int main()
{ 

    vector<int>arr;
    unordered_map<int,int>mp;
    
    for (int i = 0; i < 9; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    for (int i = 0; i < 9; i++)
    {
        mp.push_back(arr[i]);
    }
    
    for (int i = 0; i < n; i++)
    {
       if (mp.find(10-arr[i]!=mp.end()))
       {
        mp[arr[i]]= 10-arr[i];   
       } 
    }

    for (auto i : mp)
    {
        cout<<i.first<<","<<i.second;
    }
    
return 0;
}

