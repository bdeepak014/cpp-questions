#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	if(a == 0)
	return b;
	return gcd(b%a,a);
}
int lcm(int arr[],int n)
{
	int ans = arr[0];
	for(int i = 1;i < n;i++)
	{
		ans = (arr[i]*ans)/gcd(arr[i],ans);
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<lcm(arr,n);
}
