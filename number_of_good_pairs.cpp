/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//number of good pairs problem using c++.
#include <bits/stdc++.h>

using namespace std;
int good(int a[],int n)
{
    unordered_map<int,int>mp;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(mp.find(a[i])!=mp.end())
        {
            c=c+mp[a[i]];
        }
        mp[a[i]]++;
    }
    return c;
}

int main()
{
   int a[]={1,2,3,1,1,3};
   int n=sizeof(a)/sizeof(a[0]);
   int k=good(a,n);
    cout<<"the number of the pairs are\n"<<k<<endl;
    return 0;
}
