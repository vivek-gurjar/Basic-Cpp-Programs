#include<bits/stdc++.h>
using namespace std;
int arr[50];

int fib(int num)
{
    if(num<=1)
        return num;
    if(arr[num] != -1) // iska mtlb hai ke array me kuch vakue hogi or jo hogi usko return krege recursive fun() ko
        return arr[num];
    arr[num] = fib(num-1)+fib(num-2);
    return arr[num];
}

int main()
{
    int num;
    cout<<" Enter the value of num --> ";
    cin>>num;
    for(int i =0; i<num+1; i++)
        arr[i] = -1; // this means array is not  yet computed
    cout<<fib(num);
}