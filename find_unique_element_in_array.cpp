/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//this is the program to find the unique element in array.

#include <bits/stdc++.h>

using namespace std;


int fun(int a[],int n)
{
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        mp[a[i]]++;
        
    }
    
    for(auto i:mp)
    {
        if(i.second==1)
        {
            cout<<i.first<<endl;
        }
    }
}

int main()
{
    int a[]={1,2,2,3,3,4,4,5};
    int n=sizeof(a)/sizeof(a[0]);
    fun(a,n);

    return 0;
}
