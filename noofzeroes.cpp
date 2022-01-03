#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;
cin>>x;
{
	int res=1;
	for(int i=2;i<=x;i++)
	res=res*i;
	int y=0;
	while(res%10==0)
	{
	y++;
	res=res/10;
	}
	cout<<y;
}
}
