#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v(10);
	for(int i = 0;i<v.size();i++)
		v[i] = i;
	for(int i = 5;i<10;i++)
		v.push_back(i);
	for(int i = 0;i<5;i++)
		v.pop_back();
		v.resize(8);
		for(int i = 0;i<v.size();i++)
		v[i] = i+1;
		for(int i = 0;i<v.size();i++)
		cout<<v[i]<<endl;
		cout<<v.empty()<<endl;
		vector<int> v1(3,2);
		swap(v,v1);
		cout<<"size v = " <<v.size()<<endl; 
		cout<<"size v1 = " <<v1.size()<<endl; 
		vector<string> s; 
		for(int i = 0;i<3;i++)
		{
			s.push_back("deepak");
			cout<<s[i]<<endl;
		}
}
