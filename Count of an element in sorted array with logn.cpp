#include<iostream>
using namespace std;
int bs(int arr[],int l,int r,int k)
{
	if(l<=r)
	{
		int mid = (l+r)/2;
		if(arr[mid] == k && (mid == l || arr[mid-1] < arr[mid]))
		return mid;
		else if(arr[mid] >= k)
		return bs(arr,l,mid-1,k);
		else
		return bs(arr,mid+1,r,k);
	}
	return -1;
}
int bs1(int arr[],int l,int r,int k)
{
	if(l<=r)
	{
		int mid = (l+r)/2;
		if(arr[mid] == k && (mid == r || arr[mid+1] > arr[mid]))
		return mid;
		else if(arr[mid] > k)
		return bs1(arr,l,mid-1,k);
		else if(arr[mid] <= k)
		return bs1(arr,mid+1,r,k);
	}
	return -1;
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
	int k;
	cin>>k;
	int l = bs(arr,0,n-1,k);
	if(l == -1)
	cout<<"Not Found";
	else
	{
	int h = bs1(arr,0,n-1,k);
	cout<<"count = "<<h-l+1;
	}
}
