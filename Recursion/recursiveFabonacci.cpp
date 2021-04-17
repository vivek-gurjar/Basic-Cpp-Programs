#include<bits/stdc++.h>
using namespace std;

int fib(int num )
{  
    int result;
    // cout<<" im calculating F("<<num<<")\n";
    if(num<=1)
        return num;
     result=fib(num-1)+fib(num-2);
    // cout<<" Done F("<< num <<") = "<< result <<"\n";
    return result;
}
int main()
{
    int f1=0,f2=1,f,num;
    cout<<" Enter the kth element --> ";
    cin>>num;
    cout<<fib(num);
}