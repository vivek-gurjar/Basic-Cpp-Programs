#include<iostream>
using namespace std;
int main()
{
    int i,j,num,num1=2;
    cout<<" Enter the number --> ";
    cin>>num;

    for(i=1; i<=num; i++)
    {
        for(j=1; j<=num; j++)
        {
            cout<<"  "<<num1;
            num1+=2;
        }
        cout<<endl;
    }
}