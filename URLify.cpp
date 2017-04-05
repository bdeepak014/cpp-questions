#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	gets(str);
	int len = strlen(str);
	int count = 0;
	int i;
	for(i = 0 ;i < len;i++)
	{
		if(str[i] == ' ')
		count++;
	}
	int index = len + (2*(count));
	int t = index;
	for(i = len-1; i>=0; i--)
	{
		if(str[i] == ' ')
		{
			str[index-1] = '0';
			str[index-2] = '2';
			str[index-3] = '%';
			index = index - 3;
		}
		else
		{
			str[index-1] = str[i];
			index = index-1;
		}
	}
	str[t] = '\0';
	puts(str);
}
