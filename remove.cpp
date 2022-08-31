#include<iostream>
using namespace std;
int main()
{
    string s,a;
    char temp;
     getline(cin, s);
     getline(cin, a);
      int i,j;
      for ( j = 0; j<a.size(); j++)
      {
        for ( i = 0; i<s.size(); i++)
        {
            if (s[i]==s[j])
            {
                temp=s[i+1];
            }
            
        }
        
      }
      temp='\0';
      cout<<temp;
      
}