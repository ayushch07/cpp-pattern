#include<iostream>
using namespace std;
int main()
{
    int n,b,c,e=1;
    cin>>n;
    
    c=n+1;

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=(n*2)-1;j++)
        {
            if (i==j||(i+j<=((n*2)-1)&&i>j)||j>=c||((i+j==(n*2)-1)&&i+1==n)||((i+j==n*2 && i+2==n+1)))
            {
                  cout<<"   ";
            }
            else
            cout<<" * ";
            
        }
        cout<<endl;
        c++;
 
    }
    while(e<=(n*2)-2)
    {cout<<"   ";
    e++;}
    cout<<" * ";

}