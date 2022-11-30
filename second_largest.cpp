/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//this is the c++ program to find second largest.
#include <iostream>

using namespace std;
#define INT_MIN -1000;
int secondlarge(int a[],int n)
{
    int large=INT_MIN;
    int sec=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(n<2)
        return -1;
        
        if(a[i]>large)
        {
            sec=large;
            large=a[i];
        }
        else
        if(a[i]>sec && a[i]!=large)
        {
            sec=a[i];
        }
    }
    return sec;
}

int main()
{
    int a[]={1,2,14,17,17,10};
    int n=sizeof(a)/sizeof(a[0]);
    int k=secondlarge(a,n);
    cout<<"the second largest element is "<<k;
    
    

    return 0;
}
