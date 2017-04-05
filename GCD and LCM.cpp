#include<iostream>
using namespace std;
int gcd(int a, int b)
{
	if(a == 0)
	return b;
	gcd(b%a,a);
}
int main()
{
	int a,b;
	cin>>a>>b;
	cout<<"GCD = "<<gcd(a,b)<<endl;
	cout<<"LCM = "<<(a*b)/gcd(a,b);
}
