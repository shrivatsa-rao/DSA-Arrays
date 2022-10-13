//This is a ++c program to check whether the array is subset of another array.


#include <bits/stdc++.h>

using namespace std;

int sub(int a1[],int a2[],int m,int n)
{
    unordered_map<int,int>mp;

    for(int i=0;i<m;i++)
    {
        mp[a1[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(mp[a2[i]]>0)
        {
            mp[a2[i]]--;
        }
        else{
            return false;
        }
    }

    return true;
}

int main()
{
    int a1[] = { 11, 1, 13, 21, 3, 7 };
    int a2[] = { 1,1,1,1 };

    int m = sizeof(a1) / sizeof(a1[0]);
    int n = sizeof(a2) / sizeof(a2[0]);

    if (sub(a1, a2, m, n))
        printf("arr2[] is subset of arr1[] ");
    else
        printf("arr2[] is not a subset of arr1[]");
    return 0;
}
