//This is kadane algorithm in c++.

#include <iostream>

using namespace std;

void fun(int a[],int n)
{
    int c=0;
    int m=-1000;
    int i;
    for(i=0;i<n;i++)
    {
        c=c+a[i];
        if(c<a[i])
        {
            c=a[i];
        }

        if(m<c)
        {
            m=c;
        }
    }

    cout<<m<<" ";
}

int main()
{
    int a[]={-2, 3, -1, 2};
    int n=sizeof(a)/sizeof(a[0]);
    fun(a,n);
    return 0;
}
