#include<bits/stdc++.h>
using namespace std;
int oddeven(int arr[], int n)
{
		int res=1;
		int count =1;
	for(int i=1;i<n;i++)
	{
	
		if((arr[i]%2==0 && arr[i-1]%2!=0)
		 || (arr[i]%2!=0 && arr[i-1]%2==0))
		{
		count++;
			res=max(res,count);
			}	
		else
		count=1;
	}
	return res;
}
int main()
{
	int n=5;
	int arr[5]={10, 21, 6, 3, 8};
	cout<<oddeven(arr,n);
}
