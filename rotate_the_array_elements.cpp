/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//from left
//this is the c++ program to rotate from left.

#include <iostream>

using namespace std;



void rotate(int a[],int n,int k)
{
    int temp[k];
    int j=0;
    for(int i=0;i<k;i++)
    {
        temp[j++]=a[i];
    }
    
    for(int i=0;i<n-k;i++)
    {
        a[i]=a[i+k];
    }
    
    int f=0;
    for(int i=n-k;i<n;i++)
    {
        a[i]=temp[f++];
    }
    
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    
}

int main()
{
    int a[]={6,5,4,3,2,1};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    rotate(a,n,k);

    return 0;
}


//Below we have c++ program to ratate from right


//from right


void rotate(int a[],int n,int k)
{
    int temp[k];
    int j=0;
    for(int i=n-k;i<n;i++)
    {
        temp[j++]=a[i];
    }
    
    for(int i=n-k-1;i>=0;i--)
    {
        a[i+k]=a[i];
    }
    
    int f=0;
    for(int i=0;i<k;i++)
    {
        a[i]=temp[f++];
    }
    
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}


int main()
{
    int a[]={1,2,3,4,5,6};
    int k=3;
    int n=sizeof(a)/sizeof(a[0]);
    rotate(a,n,k);

    return 0;
}























