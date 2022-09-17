//This a c++ program which gives first repaeting element.


#include <bits/stdc++.h>

using namespace std;
int fun(int a[],int n)
{
    unordered_map<int,int>count;
    for(int i=0;i<n;i++)
    {
        int c=a[i];
        count[c]++;
    }

    for(int i=0;i<n;i++)
    {
        int c=a[i];
        if(count[c]>1)
        {
            return c;
        }
    }
    return -1;
}

int main()
{
    int a[]={5,6,6,7,8,9};
    int n=sizeof(a)/sizeof(a[0]);
    int k=fun(a,n);
    cout<<k<<endl;

    return 0;
}
