//this is a c++ program to print the 2d array in wave form in a reverse way.


#include <iostream>

using namespace std;
#define r 4
#define c 4

void fun(int m,int n,int a[r][c])
{
    int i,j,w=1;
    for(j=n-1;j>=0;j--)
    {
        if(w==1)
        {
            for(i=0;i<m;i++)
            {
                cout<<a[i][j];
            }
            w=0;
        }
        else
        {
             for(i=m-1;i>=0;i--)
            {
                cout<<a[i][j];
            }
            w=1;
        }
    }
}

int main()
{
   int a[4][4]={ { 1, 2, 3, 4 },
                      { 5, 6, 7, 8 },
                      { 9, 10, 11, 12 },
                      { 13, 14, 15, 16 } };
   fun(r,c,a);

    return 0;
}
