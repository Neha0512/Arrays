#include<bits/stdc++.h>
using namespace std;
int prefixSum[100000];
int prefix_Sum(int arr[], int n)
{

	prefixSum[0]=arr[0];
	for(int i=1; i<n; i++){
		prefixSum[i]=prefixSum[i-1]+arr[i];
	}
}
int get_sum(int prefixSum[], int l, int r)
{
	if(l!=0)
	{
	return prefixSum[r]-prefixSum[l-1];
}
else 
{
	return prefixSum[r];
}
}

int main()
{
	int n=5;
	int arr[n]={2,8,-4,9,5};
	prefix_Sum(arr,n);
	cout<<get_sum(prefixSum,1,2);
}
