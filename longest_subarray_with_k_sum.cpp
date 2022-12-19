/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//This is a c++ program to find the longest subarray with K sum.


#include <bits/stdc++.h>

using namespace std;

int longsub(int a[],int n,int k)
{
    int i,j,sum=0,maxi=0;
    unordered_map<int,int>mp;
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        
        
        if(sum==k)
        {
            maxi=i+1;
        }
        
        
        if(mp.find(sum)==mp.end())//if the sum is not present then it will add the sum value to the map.
        {                           //eqaul to end means element is not present in the map.
            mp[sum]=i;
        }
        
        
        if(mp.find(sum-k)!=mp.end())//if you do not equal and if u use find then element is present in the map.
        {
            if(maxi<(i-mp[sum-k]))//if element is present in the map.
            {
                maxi=i-mp[sum-k];
            }
        }
        
    }
    
    return maxi;
}

int main()
{
    int a[]={7,1,6,0};
    int k=7;
    int n=sizeof(a)/sizeof(a[0]);
   int f=longsub(a,n,k);
   cout<<f<<endl;

    return 0;
}
