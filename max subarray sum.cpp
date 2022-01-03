#include<bits/stdc++.h>
using namespace std;
int maxsub(int arr[], int n)
{
	int res=arr[0];
    int maxending=arr[0];
	for(int i=1;i<n;i++)
	{
	maxending=max(maxending+arr[i], arr[i]);
	res=max( maxending, res);

}
	return res;
}
int main()
{
	int n;
	int arr[5]={4,6,7,-3,2};
	cout<<maxsub(arr, n);
}
