#include<iostream>
using namespace std;
int main()
{

    int n,b;
    cin>>n;
    b=n+1;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=(n*2)-1;j++)
        {
            if(i+j<=n||j>=b)
            cout<<"   ";
            else
            cout<<" * ";
        }
        b++;
        cout<<endl;
    }
    for(int i=1;i<=(n*2)-1;i++)
    cout<<" * ";

}
