#include<iostream>//not a correct code
using namespace std;
int main () {
	int t;
	cin>>t;
	while(t>0)
	{
		int n,c=0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		for(int i=0;i<n;i++)
		{
			c=c+((((a[i]^a[i])+a[i])|a[i])^a[i]);
		}
		if(c%2==0)
		cout<<"Even"<<endl;
		else
		cout<<"Odd"<<endl;
      t--;
	}
	return 0;
}