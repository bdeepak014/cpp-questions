#include<string>
#include<iostream>
#include <sstream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int i = 0;
	string t;
	int count;
	while(s[i] != '\0')
	{
		count = 1;
		while(s[i+1] != '\0' && s[i] == s[i+1])
		{
			count++;
			i++;
		}
		t.insert(t.end(),1,s[i]);
		string Result;         
		stringstream convert; 
		convert << count;     
		Result = convert.str();
		t = t + Result;
		i++;
	}
	cout<<t; 
	
/*	string Text = "456"; 
	int Result;   
	stringstream convert(Text); 
    if ( !(convert >> Result) ) 
    Result = 0;             
	cout<<Result;*/
}
