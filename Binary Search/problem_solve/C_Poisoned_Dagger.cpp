#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       ll mid,n,h,sum=0;
       cin>>n>>h;
        ll low = 0,high=h;
     
       ll ara[n];
     for (int i = 0; i < n; i++)
     {
       cin>>ara[i];
     }
        

        while (low<=high)
        {
             mid = low+(high-low)/2;

                sum=mid;
            for (int i = 1; i < n; i++)
            {
              
              sum+= min(mid,ara[i]-ara[i-1]);
                
                
            }

          

            if (sum>=h)
            {
             high = mid-1;

            }
            else
            {
                low = mid+1;
            }
            
            
            







        }


        cout<<high+1<<endl;
        

    




    }
 return 0;
}