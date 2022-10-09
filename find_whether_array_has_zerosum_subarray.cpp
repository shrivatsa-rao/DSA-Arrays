//C++ program to find whether array has zero sum subarray

#include <iostream>
#include<unordered_map>

using namespace std;

int fun(int a[],int n)
{
    unordered_map<int,int>mp;
    int i,s=0,f=0;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(s==0 || a[i]==0 || mp[s]==1)
        {
            f=1;
            break;
        }
        else{
            mp[s]=1;
        }
    }

    if(f==1)
    {
        cout<<"array has zero sum";
    }
    else
    {
        cout<<"no zero sum subarray";
    }

}

int main()
{
    int a[] =  { 1,23,4 };
    int n = sizeof(a)/sizeof(a[0]);
    fun(a,n);
    return 0;
}
