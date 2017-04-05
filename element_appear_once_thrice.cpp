#include <iostream>
using namespace std;
int func(int arr[],int n)
{
	int sum=0;
	int result=0;
	int x;
	for(int i=0;i<32;i++)
	{
		sum=0;
		x=1<<i;
		for(int j=0;j<n;j++)
		{
			if(arr[j]&x)
			sum++;
		}
		if(sum%3)
		result=result|x;
	}
	return result;
}
int main() {
	int n;
	cout<<"size:";
	cin>>n;
	int arr[n];
	cout<<"elements:";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Your element: "<<func(arr,n);
	return 0;
}
