//This is a c++ program to find th unique occurances.

#include <bits/stdc++.h>

using namespace std;
void fun(int a[],int n)
{
    unordered_map<int,int>mp;
    int c,i,j;
    for(i=0;i<n;i++)
    {
        c=a[i];
        mp[c]++;
    }

    for(i=0;i<n;i++)
    {
        c=a[i];
        if(mp[c]==1)
        {
            cout<<a[i];
        }
    }

}

int main()
{
   int a[]={1,2,3,3,4,4,5,6,6};
   int n=sizeof(a)/sizeof(a[0]);
   fun(a,n);
    return 0;
}
