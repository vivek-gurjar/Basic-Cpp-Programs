#include<bits/stdc++.h>
using namespace std;
int main()
{
    int f1=0,f2=1,f,num;
    cout<<" Enter the kth element --> ";
    cin>>num;
    for(int i=2; i<=num; i++)
    {
        f=f1+f2;
        f1=f2;
        f2=f;
        cout<<" "<<f;
    }
    cout<<"\n"<<f;
}