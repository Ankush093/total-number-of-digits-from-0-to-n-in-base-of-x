#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{
		long long int n,k;
		cin>>n>>k;
		long long int res=1,count=0;
		while(res<=n)
		{
			res=res*k;
			count++;
		}
		long long int power=1,x=0,sum=0,i;
		for(i=1;i<count;i++)
		{
			power=power*k;
			sum+=((power-x)*i);
			x=power;
		}
		sum+=((n-x+1)*i);
		cout<<sum<<"\n";
	}
}
