/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

//remove the duplicates element from array.

#include <iostream>

using namespace std;
int repeat(int a[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(a[i]!=a[j])
        {
            i++;
            a[i]=a[j];
        }
        
    }
    return i+1;
}

int main()
{
  int a[]={1,2,2,3,3,3,4,4};
  int n=sizeof(a)/sizeof(a[0]);
  int k=repeat(a,n);
  //cout<<"the no of repeating elements is \n"<<k<<endl;
  for(int i=0;i<k;i++)
  {
      cout<<a[i];
  }
  return 0;
 
}
