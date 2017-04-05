#include <iostream>
using namespace std;
int func(int arr[],int n)
{
	int result;
	for(int i=0;i<n;i++)
	{
		result=resul^arr[i];
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
