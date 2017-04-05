#include<iostream>
using namespace std;
int func(int k,int a[],int l)
{
	
	int c = 0;
	for(int i = 0;i<l;i++)
	{
		int p = (a[i]*k) + c;
		a[i] = p%10;
		c = p/10;
		
	}
	while(c)
	{
		a[l] = c%10;
		c = c/10;
		l++;
	}
	return l;
}
void fac(int n)
{
	int a[500];
	a[0] = 1;
	int l = 1;
	for(int i = 2;i<=n;i++)
	{
		l = func(i,a,l);
	}
	for(int i = l-1;i>=0;i--)
	{
		cout<<a[i];
	}
	
}

int main()
{
	int n;
	cin>>n;
	fac(n);
}
