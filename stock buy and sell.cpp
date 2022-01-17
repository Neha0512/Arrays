#include<bits/stdc++.h>
using namespace std;

int profits(int arr[], int n)
{
	int res=0;
	for(int i=1; i<n; i++)
	{
		if(arr[i]>arr[i-1])
		{
			res+=arr[i]-arr[i-1];
		}
	}
	return res;
}

int main()
{
	int n=5;
	int arr[n]={1,5,3, 8,12};
	cout<<profits(arr, n);
}
