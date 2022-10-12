//This is the program to find th majority element in array.

#include <bits/stdc++.h>

using namespace std;


int fun(int a[],int n)
{
    int c=1,i;
    sort(a,a+n);
    for(i=1;i<=n;i++)
    {
        if(a[i-1]==a[i])
        {
            c++;
        }
        else
        {
            if(c>n/2)
            {
                return a[i-1];
            }
            c=1;
        }
    }

    return -1;
}

int main()
{
    int a[] = {  1, 3, 3, 1, 2 };
    int n = sizeof(a) / sizeof(a[0]);

    // Function calling
   int k= fun(a, n);
   if(k==-1)
   {
       cout<<"no major";
   }
   else
   {
       cout<<k;
   }
    return 0;
}
