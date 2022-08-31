#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i+j==n*2||i+j==n+1||i+j==n+2||i+j==n+3||i+j==n+4)
            cout<<"*";
            else
            cout<<" ";
        }
        cout<<endl;
    }
}