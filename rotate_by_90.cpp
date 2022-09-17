//This is  c++ program for rotate a 2d array by 90.


#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int i,j;
    int   n=3;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }

    for(i=0;i<n/2;i++)
    {
        for(j=0;j<n;j++)
        {
            swap(a[j][i],a[j][n-1-i]);

        }
    }


    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
