#include<iostream>
using namespace std;
int binary(int l,int r,int k)
{
    if(k==1)
    {
       return 1;
    }
   int mid;
   while(l<=r)
   {
        mid=(l+r)/2;
        int fnd=mid*mid;
        int fnd2=(mid-1)*(mid-1);
        int fnd1=(mid+1)*(mid+1);
        if(fnd==k)
        {
            return mid;
        }
        else if(fnd<k)
        {
            if(fnd1>k)
            {
                return mid;
            }
            else
            {
                return binary(mid+1,r,k);
            }
        }

        else if(fnd>k)
        {
            if(fnd2<k)
            {
                return mid-1;
       }
            else
            {
                return binary(l,mid-1,k);
            }
        }
    }
return -1;
}
main()
{
int num;
cin>>num;
int res=binary(0,num/2,num);
cout<<res;
}
