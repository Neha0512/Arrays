#include<bits/stdc++.h>
using namespace std;
int maxSum(int arr[], int n)
{
	int res=0;
	int k=3;
	for(int i=0;i<k;i++)
	res=res+arr[i];
	int max_res=res;
	for(int i=k;i<n;i++)
	{
		res=res+(arr[i]-arr[i-k]);
		max_res=max(res,max_res);
	}
	return max_res;
}
int main()
{
	int n=6;
	int arr[]={2,-5,5,6,7,-3};
	cout<<maxSum(arr,n);
	}
