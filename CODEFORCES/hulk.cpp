//CODEFORCES: Challenge 4
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i!=1)
        {
            cout<<" that ";
        }
        if(i%2!=0)
        {
            cout<<"I hate";
        }
        if(i%2==0)
        {
            cout<<"I love";
        }
        if(i==n)
        {
            cout<<" it";
        }
    
    }
    return 0;
}