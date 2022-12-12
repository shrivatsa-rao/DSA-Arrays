/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Subarray Sum Equals K.
//This is a c++ program to find the Subarray Sum Equals K with the best approach.

#include <bits/stdc++.h>

using namespace std;

int count(int a[],int k,int n)
{
    unordered_map<int,int>mp;
    int c=0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+a[i];
        if(sum==k)
        {
            c++;
        }
        if(mp.find(sum-k)!=mp.end())//here we are subtracting sum with k and then finding in the map if it is present
        {// if it is present or not.
            c=c+mp[sum-k];
            
        }
        mp[sum]++;//put the sum into map outside the bracket then only it works
    }
    return c;
}

int main()
{
    int a[]={1,2,3};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    int f=count(a,k,n);
    cout<<f<<endl;

    return 0;
}
