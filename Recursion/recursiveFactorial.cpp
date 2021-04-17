#include<bits/stdc++.h>
using namespace std;

long long factorial(long long num)
{     int result;

      cout<<" im calculating F("<<num<<")\n";

      if (num == 0)
            return 1;
            
      result=num*factorial(num-1);
      
      cout<<" Done F("<< num <<") = "<< result <<"\n";
      return result; 
}

int main()
{
      long long num;

      cout<<" Enter the value -->> ";
      cin>>num;

      cout<<"\n f("<< num <<") is --> " << factorial(num);

}