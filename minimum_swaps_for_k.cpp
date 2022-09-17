// c++ program to Minimum swaps for k together


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[]={2,7,9,5,8,7,4};
    int k=5,c=0,b=0,ans,i,j;
    int n=sizeof(a)/sizeof(a[0]);
    for(i=0;i<n;i++)
    {
        if(a[i]<=k)
        c++;
    }

    for(i=0;i<c;i++)
    {
        if(a[i]>k)
        {
            b++;
        }
    }

    ans=b;

    for(i=0,j=c;j<n;j++,i++)
    {
        if(a[i]>k)
        b--;

        if(a[j]>k)
        b++;

        ans=min(ans,b);
    }

    cout<<ans;
    return 0;
}
