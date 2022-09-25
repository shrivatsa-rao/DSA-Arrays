//This is c++ program to find th triplet sum.

#include <bits/stdc++.h>

using namespace std;

int fun(int a[],int k,int n)
{
    sort(a,a+n);

    int i,l,h;
    for(i=0;i<n-2;i++)
    {
        l=i+1;
        h=n-1;
        while(l<h)
        {
            if(a[i]+a[l]+a[h]==k)
            {
                cout<<a[i]<<a[l]<<a[h];
                return 1;
            }
            else
                if(a[i]+a[l]+a[h]<k)
            {
                l++;
            }
            else{
                h--;
            }
        }

    }

}

int main()
{
   int a[]={1, 4, 45, 6, 10, 8};
   int n=sizeof(a)/sizeof(a[0]);
   int k=22;
   fun(a,k,n);
    return 0;
}
