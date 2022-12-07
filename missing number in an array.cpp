/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
//Find the missing number using c++.


#include <iostream>

using namespace std;

void miss(int a[],int n)
{
    int temp[n+1];
    for(int i=0;i<=n;i++)
    {
        temp[i]=0;
    }
    
    for(int i=0;i<n;i++)
    {
        temp[a[i]-1]=1;  //here main logic is subtract one from a[i] and then store it in temp;
    }
    
    int ans;
    
    for(int i=0;i<n;i++)
    {
        if(temp[i]==0)
        {
            ans=i+1;
        }
    }
    
    cout<<ans;
}


int main()
{
    int a[]={ 1, 2, 3, 4, 5, 7, 8, 9, 10 };
    int n=sizeof(a)/sizeof(a[0]);
    miss(a,n);

    return 0;
}
