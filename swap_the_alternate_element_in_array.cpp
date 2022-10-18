/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//This is the program to swap the alternate element in the array.

#include <iostream>

using namespace std;

int fun(int a[],int n)
{
    int t;
    for(int i=0;i<n-1;i=i+2)
    {
        t=a[i];
        a[i]=a[i+1];
        a[i+1]=t;
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
}



int main()
{
   int a[]={1,2,3,4,5,6};
   int n=sizeof(a)/sizeof(a[0]);
   fun(a,n);

    return 0;
}
