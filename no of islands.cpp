#include<iostream>
#include<cstring>
using namespace std;
int safe(int **arr,int **visited,int i,int j,int m,int n)
{

    if((i>=0) && (i<m) && (j>=0) && (j<n) && (arr[i][j] == 1) && (!visited[i][j]))
	return 1;
	return 0;

}
int dfs(int **arr,int **visited,int i,int j,int m,int n,int max)
{
	int r[] ={-1,-1,-1,0,0,1,1,1};
	int c[] ={-1,0,1,-1,1,-1,0,1};
	visited[i][j] = 1;
	int k;
	for( k = 0;k < 8; k++)
	{
	    int res = safe(arr,visited,i+r[k],j+c[k],m,n);
		if(res == 1)
		{
			 max++;
		   return dfs(arr,visited,i+r[k],j+c[k],m,n,max);
		  
		}
	}
	return max;
}
int count(int **arr,int m,int n)
{
	int count = 0;
		int i,j;
	int **visited = new int*[m];
	for( i = 0;i<m;i++)
	visited[i] = new int[n];
    for( i = 0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			visited[i][j] = 0;
		}
	}
	//memset(visited,0,sizeof(visited));
	int res = 0;
	for( i = 0;i<m;i++)
	{
		for(j = 0;j<n;j++)
		{
			if((arr[i][j]==1) && (visited[i][j] == 0))
			{
				int k = dfs(arr,visited,i,j,m,n,1);
				count++;
				if(k >= res)
				res = k;
			}
		}
	}
	cout<<"no. of elements in max island ="<<res<<endl;
	return count;
}
int main()
{
	int m,n;
		int i,j;
	cin>>m>>n;
	int **arr = new int*[m];
	for( i = 0;i<m;i++)
	arr[i] = new int[n];
	for( i = 0;i<m;i++)
	{
		for( j = 0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	cout<<"no. of islands = "<<count(arr,m,n);
}
