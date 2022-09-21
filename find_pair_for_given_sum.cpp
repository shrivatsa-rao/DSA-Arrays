/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//This is a c++ program to find the pair for given sum.

#include <bits/stdc++.h>

using namespace std;
void fun(int a[],int n,int k)
{
    sort(a,a+n);
    
    int h=n-1,l=0;
    while(l<h)
    {
        if(a[l]+a[h]==k)
        {
            cout<<a[l]<<" "<<a[h];
            break;
        }
        else
        if(a[l]+a[h]<k)
        {
            l++;
        }
        else{
            h--;
        }
    }
}


int main()
{
   int a[]={5, 2, 6, 8, 1, 9};
   int n=sizeof(a)/sizeof(a[0]);
   int k=13;
   fun(a,n,k);

    return 0;
}
