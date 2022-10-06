//This is a c++ program to find the count of subarray with sum equal to given sum.
#include <iostream>
#include<unordered_map>

using namespace std;
int fsum(int a[],int n,int k)
{
    int c=0,s=0,i;
    unordered_map<int,int>m;
    m[s]=1;
    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(m.find(s-k)!=m.end())
        {
            c=c+m[s-k];
        }
        m[s]++;
    }

    cout<<"the total subarrays are"<<c;
}

int main()
{
    int a[] = {9, 4, 20, 3, 10, 5};
    int k = 33;
    int n = sizeof(a) / sizeof(a[0]);
    fsum(a, n, k);
    return 0;
}
