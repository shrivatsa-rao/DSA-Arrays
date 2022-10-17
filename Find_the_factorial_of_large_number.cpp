/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//This is a c++ program to find factorial for large numbers.

#include <iostream>
#define max 500

using namespace std;

int multi(int x,int res[],int res_size);


void fact(int n)
{
    int x,res_size=1,i;
    int res[max];
    res[0] = 1;
    for(x=2;x<=n;x++)
    {
        res_size=multi(x,res,res_size);
    }
    
    for(i=res_size-1;i>=0;i--)
    {
        cout<<res[i];
    }
    
}



int multi(int x,int res[],int res_size)
{
    int c=0,i,prod;
    for(i=0;i<res_size;i++)
    {
        prod=res[i]*x+c;
        
        res[i]=prod%10;
        
        c=prod/10;
        
    }
    
    
    while(c)
    {
        res[res_size]=c%10;
        c=c/10;
        res_size++;
    }
    
    return res_size;
}



int main()
{
   fact(100);

    return 0;
}
