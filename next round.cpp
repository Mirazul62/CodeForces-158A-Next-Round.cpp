///38453713	Practice:
///Miraz07	158A - 12	GNU C++11	Accepted	62 ms	792 KB	2018-05-20 12:11:37	2018-05-20 12:11:37

///→ Source Copy
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i, n,m,a[100000],count=0,min=0;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        min=a[m];
    }
   /// cout<<min;
    for(i=1;i<=n;i++)
    {
        if(a[1]>0)
       {

        if(a[i]>=min && a[i]>0)
            count++;
       }
       else
        count=0;
    }
    cout<<count;


}
