#include<bits/stdc++.h>
using namespace std;
int maxelement(int arr[], int n)
{
	int count =0;
	int res=0;
	for(int i=0;i<n;i++)
	{
	for(int j=i+1;j<n;j++)
	{
	if(arr[i]==arr[j])
	{
		count++;
		}	
	}
	if(count>n/2)
	{
		return i;
	}
	else
	{
		cout<<"-1";
	}
}
}
int main()
{
	int n=5;
	int arr[n]={2,3,2,2,4};
	cout<<maxelement(arr,n);
}
