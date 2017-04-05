#include<iostream>
#include <ctime>
using namespace std;
int main()
{
	/*	USING EXTRA SPACE
	int row,col;
	cin>>row>>col;
	int arr[row][col];
	int res[col][row];
	for(int i = 0;i < row;i++)
	{
		for(int j = 0; j < col; j++)
		{
			cin>>arr[i][j];
			res[col-1-j][i] = arr[i][j];
		}
	}
	for(int i = 0;i < col;i++)
	{
		for(int j = 0; j < row; j++)
		{
			cout<<res[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	// WITHOUT USING EXTRA SPACE
	int n;
	cin>>n;
	int arr[n][n];
	for(int i = 0;i < n;i++)
	{
		for(int j = 0; j < n; j++)
		{
			cin>>arr[i][j];
		}
	}
	time_t begin,end;
	time (&begin);
	for(int i = 0;i<n/2;i++)
	{
		for(int j = i; j < n-i-1;j++)
		{
			int temp = arr[i][j];
			arr[i][j] = arr[j][n-1-i];
			arr[j][n-1-i] = arr[n-1-i][n-1-j];
			arr[n-1-i][n-1-j] = arr[n-1-j][i];
			arr[n-1-j][i] = temp;
		}
	}
	time (&end);
	double difference = difftime (end,begin);
	cout<<"time taken for function() %.2lf seconds. = "<<difference<<endl ;
	for(int i = 0;i <n;i++)
	{
		for(int j = 0; j < n; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
}
