/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//this is c++ program to find the duplicate elements.

#include <bits/stdc++.h>

using namespace std;
void fun(int a[],int n)
{
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        int c=a[i];
        mp[c]++;
    }
    
    // for(int i=0;i<n;i++)
    // {
    //     cout<<mp[i];
    // }
    
    for(int i=0;i<n;i++)
    {
        
        if(mp[i]>1)
        {
            cout<<i;
        }
    }
}


int main()
{
   int a[]={0,0,1,2,2,3,3,4,5};
   int n=sizeof(a)/sizeof(a[0]);
   fun(a,n);

    return 0;
}
