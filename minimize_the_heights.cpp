//This is a c++ program to minimize the heights.



#include <bits/stdc++.h>


using namespace std;

int main()
{
   int a[]= { 7, 4, 8, 8, 8, 9 };
   int n=sizeof(a)/sizeof(a[0]);
   sort(a,a+n);

   int i,s,l,mi,ma,ans,k=6;
   ans=a[n-1]-a[0];
   s=a[0]+k;
   l=a[n-1]-k;

   for(i=0;i<n-1;i++)
   {
       mi=min(s,a[i+1]-k);
       ma=max(l,a[i]+k);

       if(mi<0)continue;

       ans=min(ans,ma-mi);
   }


   cout<<ans;


    return 0;
}
