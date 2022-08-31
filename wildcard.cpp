#include<iostream>
using namespace std;
void code(string str,int index)
{
	if(index==str.size())
	{
		cout<<str<<" ";
		return;
	}
	if(str[index]=='?')
	{
		str[index]='0';
	code(str,index+1);
	    str[index]='1';
		code(str,index+1);
	}
	else
	code(str,index+1);
}

int main() {
	       int t;
		   cin>>t;
		   while(t>0)
		   {
          char str[100];
		  cin>>str;
		  code(str,0);
          
		  t--;
         cout<<endl;
             }
		  
	return 0;
}