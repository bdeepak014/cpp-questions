#include<stdio.h>
#include<string.h>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;
bool result(string s1,string s2)
{
	int l1 = s1.length();
	int l2 = s2.length();
	if(abs(l1-l2) > 1)
	return false;
	int i =0;
	int j =0;
	int count = 0;
	while(i < l1 && j < l2)
	{
		if(s1[i] != s2[j])
		{
			if(count == 1)
			return false;
		
				if(l1 == l2)
				{
					i++;
					j++;
				}
				else if(l1 > l2)
				{
					i++;
				}
				else if(l2 > l1)
				{
					j++;
				}
				count++;
			
		}
		else
		{
			i++;
			j++;
		}
	
	}
	if(i<l1 || j<l2)
	count++;
	
	if(count == 1)
	return true;
	else
	return false;
}
int main()
{
	string s1;
	string s2;
	cin>>s1>>s2;
	bool res = result(s1,s2);
	cout<<res;
}
