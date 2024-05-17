#include<bits/stdc++.h>
using namespace std;
#define ll long long

// Binary Search

int binary_search(int A[],int n , int data)
{
    int left,right,mid;
     left=0;
     right=n-1;

     while (left<=right)
     {
         mid = (left + right)/2;

         if(data==A[mid]) return mid;

         else if(data>A[mid])
         {
            left=mid+1;
         }
         else
         {
            right = mid-1;
         }
    

     }

     return -1;
     



}












int main()
{

int ara[]={1,2,5,4,9,8,7,6,3,5};
int n = sizeof(ara) / sizeof(ara[0]);

// Binary search working only in shorted array 
 sort(ara,ara+n);

 for (auto &&i : ara)
 {
    cout<<i<<" ";
 }
 

 cout<<endl<<binary_search(ara,n,5);






 return 0;

 
}