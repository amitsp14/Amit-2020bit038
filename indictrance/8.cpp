#include <iostream>

using namespace std;

bool palindrome (string s){
     int l = 0;
     int r= s.length()-1;

    while (l<r)
    {
        if (s[l]!=s[r])
        {
           return false;
        }
        l++;
        r--;
        
    }

    return true;

}
int main()
{

    string s;
    cin>>s;

  
     int op = palindrome(s);
    
     if (op==0)
     {
        cout<<"False";
     }
     else{
        cout<<"True";
     }
     

return 0;
}