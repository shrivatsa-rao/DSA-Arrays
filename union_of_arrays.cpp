#include <iostream>

using namespace std;
void fun(int a[],int b[],int m,int n)
{
    int i=0,j=0;
    while(i<m && j<n)
    {
        if(a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else
        if(b[j]<a[i])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else{
            cout<<a[i]<<" ";;
            i++;
            j++;
        }


    }

    while(i<m)
    {
        cout<<a[i]<<" ";;
        i++;
    }
    while(j<n)
    {
        cout<<b[j]<<" ";
        j++;
    }


}

int main()
{
    int a[]={1,2,3,4,5};
    int b[]={5,6,7,8};
    int m=sizeof(a)/sizeof(a[0]);
    int n=sizeof(b)/sizeof(b[0]);
    fun(a,b,m,n);
    return 0;
}
