#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

 int n,k;
 cin>>n>>k;
 int in[n],s[n];
 ll need = 0;

for (int i = 0; i < n; i++)
{
   cin>>in[i];

}
for (int i = 0; i < n; i++)
{
   cin>>s[i];
   
}


 

// using binary search to find how many burgers i can make

ll low=0,high=2000;

while (low<=high)
{
    
   ll mid=(low+high)/2;
   ll x=0;
   need=0;
   for (int i = 0; i < n; i++)
   {
       need+= max(in[i]*mid-s[i],x);
   }

   
    if (need>k)
   {
    high = mid -1;
   }
   else {
    low= mid+1;
   }
   
 

} 
    


   cout<<high<<endl;






 return 0;
}