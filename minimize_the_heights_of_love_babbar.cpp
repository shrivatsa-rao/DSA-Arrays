#include <bits/stdc++.h>

using namespace std;

void fun(int a[],int k,int n)
{
    sort(a,a+n);
    int mini=a[0];
    int maxi=a[n-1];
    int ans=maxi-mini;
    for(int i=1;i<n;i++)
    {
        mini=min(a[0]+k,a[i]-k);
        maxi=max(a[n-1]-k,a[i-1]+k);
        ans=min(ans,maxi-mini);
    }
    cout<<ans;


}

int main()
{
   int a[] = {1, 15, 10}, k =6;
   int n= sizeof(a)/sizeof(a[0]);
   fun(a,k,n);

    return 0;
}
