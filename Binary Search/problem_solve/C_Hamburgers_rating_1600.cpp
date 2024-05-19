#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

 string s1;
 cin>>s1;
 int b1,b2,b3,p1,p2,p3;
 cin>>b1>>b2>>b3;
 cin>>p1>>p2>>p3;
 ll r;
 cin>>r;

// count need of elements
 ll b=0,s=0,c=0;

for (auto &&i : s1)
{
    if(i=='B') b++;
    if(i=='S') s++;
    if(i=='C') c++;
    
}


// using binary search to find how many burgers i can make

ll low=0,high=r+200;

while (low<=high)
{
    
   ll mid=(low+high)/2;
   ll x=0;
   
   ll r1=max(b*mid-b1,x);
   ll r2=max(s*mid-b2,x);
   ll r3=max(c*mid-b3,x);

   ll rate = r1*p1 + r2*p2 +r3*p3;

   
    if (rate>r)
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