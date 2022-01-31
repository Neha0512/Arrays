#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int maxDiff(int arr, int n)
{
	int res=arr[1]-arr[0];
	int minValue=arr[0];
	for(int i=1; i<n; i++)
	{
		res=max(res,arr[i]-minValue)
		minValue=min(arr[i],minValue);
	}
	return res;
}

int main()
{
	int n=7;
	int arr[n]={2,3,10,4,6,8,1};
	return maxDiff(arr,n);
}
