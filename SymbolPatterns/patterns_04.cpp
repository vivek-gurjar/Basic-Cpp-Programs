#include<iostream>
using namespace std;
int main()
{
    int i,j,num;
    cout<<" Enter te number --> ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        for(j=num; j>=i; j--)
        {
            cout<<"  "<<"*";
        }
        cout<<endl;\
    }
}