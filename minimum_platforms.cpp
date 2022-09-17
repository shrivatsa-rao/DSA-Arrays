//This is a c++ program which the minimun number of platform.


#include <bits/stdc++.h>

using namespace std;
int fun(int a[],int d[],int n)
{
    sort(a,a+n);
    sort(d,d+n);
    int i=0,j=0,c=0,ans=0;
    while(i<n)
    {
        if(a[i]<=d[j])
        {
            c++;
            ans=max(ans,c);
            i++;
        }
        else
        {
            c--;
            j++;
        }
    }
    return ans;


}

int main()
{   int a[] = { 900, 940, 950, 1100, 1500, 1800 };
    int d[] = { 910, 1200, 1120, 1130, 1900, 2000 };
    int n = sizeof(a) / sizeof(a[0]);
    int k=fun(a,d,n);
    cout<<k<<endl;
    return 0;
}
