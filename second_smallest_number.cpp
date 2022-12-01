/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#define INT_MAX 1000;
using namespace std;


int second_smallest(int a[],int n)
{
    int small=INT_MAX;
    int sec=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(a[i]<small)
        {
            sec=small;
            small=a[i];
        }
        else
        if(a[i]<sec && a[i]!=small)
        {
            sec=a[i];
        }
    }
    return sec;
}

int main()
{
    int a[]={1,2,4,0,7,5};
    int n=sizeof(a)/sizeof(a[0]);
    int k=second_smallest(a,n);
    cout<<k<<endl;
    return 0;
}

