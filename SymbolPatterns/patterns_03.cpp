#include<iostream>
using namespace std;
int main()
{
    int sp,i,j,num;
    cout<<" Enter the number --> ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        for(sp=1; sp<=num-i; sp++)
        {
           cout<<" ";
        }

        for(j=1; j<=i; j++)
        {
           cout<<"*";
        }
        cout<<endl;
    }
}