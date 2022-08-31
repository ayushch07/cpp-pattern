#include<iostream>
using namespace std;
int main() {
	   int t;
	   cin>>t;
	   while(t>0)
	   {
		   int k,n,i,d;
		   cin>>k;
		   cin>>n;
		   int arr[n];
		   for(i=0;i<n;i++)
		   cin>>arr[i];
		   for(i=0;i<n;i++)
		   {
			   if(arr[i]>k)
			   arr[i]=arr[i]-k;
			   else if(arr[i]<k)
			   arr[i]=k+arr[i];
               else
               continue;
		   }
		   for(i=0;i<n;i++)
		   {
			   for(int j=i+1;j<n;j++)
			   {   if(arr[i]>arr[j])
				   {int temp=arr[i];
				        arr[i]=arr[j];
						arr[j]=temp;}
			   }
		   }
		   for(i=0;i<n;i++)
		   {
			   d=arr[n-1]-arr[0];
		   }
		     cout<<d;
			 t--;
			 cout<<endl;



	   }
	return 0;
}