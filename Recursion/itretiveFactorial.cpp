#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long i,n,j,fact;

      cout<<" Enter the value -->> ";
      cin>>n;

      if (n==1 || n==0)
            cout<<" factorial of "<< n <<" is --> 1"<<endl; 
      else
      {
            fact=n;
            for(i=1; i<n-1; i++)
            {
                fact=fact*(n-i);
                //cout<<fact<<endl;
            }
            cout<<fact<<endl;
      }
}




/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
      long long i,n,j,fact=1;

      cout<<" Enter the value -->> ";
      cin>>n;

      if (n==1 || n==0)
            cout<<" factorial of "<< n <<" is --> 1"<<endl; 
      else
      {
            fact=n;
            for(i=2; i<5; i++)
            {
                fact=fact*i;
                cout<<fact<<endl;
            }
      }
}

*/
