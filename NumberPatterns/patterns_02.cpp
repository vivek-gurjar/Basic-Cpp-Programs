#include<iostream>
using namespace std;
int main ()
{
    int num,i,j;
    cout<<" Enter the Number --> ";
    cin>>num;
    for(i=num; i>=1; i--)
    {
        for(j=1; j<=num; j++)
        {
            cout<<" "<<i;
        }
        cout<<" "<<endl;
    }
}