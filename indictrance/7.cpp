#include<bits/stdc++.h>
using namespace std;

void longest_substring(string str)
{
    unordered_set<char> charSet;
    int left = 0, right = 0, maxLen = 0;
    string longest_str = "";

    while(right < str.length())
    {
        if(charSet.find(str[right]) == charSet.end())
        {
            charSet.insert(str[right]);
            maxLen = max(maxLen, right - left + 1);
            longest_str = str.substr(left, maxLen);
        }
        else
        {
            charSet.erase(str[left]);
            left++;
        }
        right++;
   }

    cout << longest_str.length();
}

int main()
{
    string str = "abcabcbb";
    longest_substring(str);
    return 0;
}