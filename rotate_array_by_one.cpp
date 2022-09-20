//This is a c++ program to roatate array by one

#include <iostream>

using namespace std;

int main()
{
   int a[]={1,2,3,4,5};
   int n=sizeof(a)/sizeof(a[0]);
   int x=a[n-1];
   int i;
   for(i=n-1;i>0;i--)
   {
       a[i]=a[i-1];
   }
   a[i]=x;
   for(int j=0;j<n;j++)
   {
       cout<<a[j];
   }

       return 0;
}
