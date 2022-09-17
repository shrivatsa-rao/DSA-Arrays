//this is a c++ program to print 2d array in spiral form.


#include <iostream>

using namespace std;

int main()
{
   int a[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   int i,j;
   int t=16;
   int sc=0,ec=3,sr=0,er=3;
   while(t--)
   {
       for(i=sc;i<=ec;i++)
       {
           cout<<a[sr][i];
       }
       sr++;
        for(i=sr;i<=er;i++)
       {
           cout<<a[i][ec];
       }
       ec--;
         for(i=ec;i>=sc;i--)
       {
           cout<<a[er][i];
       }
       er--;

         for(i=er;i>=sr;i--)
       {
           cout<<a[i][sc];
       }

       sc++;


   }

    return 0;
}
