#include<bits/stdc++.h>
using namespace std;
int max(int arr[], int n)
{
	int count =0;
	for(int i=0;i<n;i++)
	{
		
		if(arr[i]==1)
		{
			count++;
		}
		else break;
	
	}
		return count;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
	cout<<max(arr,n);
}
