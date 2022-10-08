//This is c++ program to find length of largest subarray

#include <iostream>
#include<unordered_map>

using namespace std;

int fun(int a[],int n)
{
    unordered_map<int,int>mp;
    int maxi=0,s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(s==0)
        {
            maxi=i+1;
        }
        else{
            if(mp.find(s)!=mp.end())
            {
                maxi=max(maxi,i-mp[s]);
            }
            else
            {
                mp[s]=i;
            }
        }

    }

    cout<<maxi;
}

int main()
{
    int a[] = { 4, 2, -3, -1, 0, 4 };
    int n = sizeof(a)/sizeof(a[0]);
    fun(a,n);
    return 0;
}
