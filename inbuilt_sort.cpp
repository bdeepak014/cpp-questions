#include<iostream>
#include<algorithm>
using namespace std;
int func(char i,char j)
{
	return (i<j);
}
int main()
{
	/*int arr[] = {24,78,34,56,10,100,12};
	sort(arr,arr+3,func);
	for(int i = 0;i<7;i++)
	{
		cout<<arr[i]<<endl;
	}*/
	char s[] = "bansal";
	sort(s,s+3,func);
	cout<<s<<endl;
	char s1[3][7] = {"deepak","bansal","champs"};
	for(int i = 0;i<3;i++)
	{
		sort(s1[i],s1[i]+6,func);
		cout<<s1[i]<<endl;	
	}
}
