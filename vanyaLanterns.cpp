#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main(int argc, char* argv[])
{
#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
#endif
	int n,length;
	
	while(scanf("%d %d",&n,&length)!=EOF)
	{

	int arr[n+1];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr,arr+n);
	int m = max(arr[0],length-arr[n-1])*2;
	
	for(int i=1;i<n;i++){
		m = max(arr[i]-arr[i-1],m);
	}
	cout << setprecision(9) << fixed << m / 2.0;
}
	return 0;
}