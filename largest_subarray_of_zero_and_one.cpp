#include <iostream>

using namespace std;

int fun(int a[],int n)
{
    int maxs=-1,sum,i,j,s;
    for(i=0;i<n-1;i++)
    {
        sum=(a[i]==0)?-1:1;
        for(j=i+1;j<n;j++)
        {
            a[j]==0?sum=sum-1:sum=sum+1;

            if(sum==0 && maxs<j-i+1)
            {
                maxs=j-i+1;
                s=i;
            }
        }
    }

    if(maxs==-1)
    {
        cout<<"no subarray";
    }
    else
    {
       cout<<s;
       cout<<s+maxs-1;

    }

}

int main()
{
    int a[] = { 1, 0, 1, 1, 1, 0, 0 };
    int n= sizeof(a) / sizeof(a[0]);
    fun(a,n);
    return 0;
}
