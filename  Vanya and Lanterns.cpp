#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
#endif
	int n,length;
	cin>>n>>length;

	int arr[n+1];

	for(int i=0;i<n;i++)
		cin>>arr[i];

	sort(arr,arr+n);
	int m = max(arr[0],length-arr[n-1]) * 2;
	printf("%d",m);
	return 0;
}