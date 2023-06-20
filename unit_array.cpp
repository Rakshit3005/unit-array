#include<bits/stdc++.h>
using namespace std;
using ll=long long int;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      int a[n];
      int c1=0,c2=0,sum=0;
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
        if(a[i]==1)
        {
            c1++;
        }
        else
        {
            c2++;
        }
        sum+=a[i];
      }
      if(c2==1 || c2==0)
      {
        cout<<c2<<endl;
      }
      else if(sum>=0)
      {
        if(c2%2==0)
        {
            cout<<0<<endl;
        }
        else 
        {
            cout<<1<<endl;
        }
      }
      else
      {
         
             int p=0;
             while(sum<0 || c2%2==1)
             {
                sum+=2;
                c2--;
                p++;
             }
             cout<<p<<endl;
         
      }

    }
    return 0;
}