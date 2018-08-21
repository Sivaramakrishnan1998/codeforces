#include <bits/stdc++.h>
#include <fstream>
using namespace std;
long long n , i, x;
int main()
{

#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
#endif
    while(scanf("%lld",&n)!=EOF)
    {
    	long long int a[1000000];
    	memset(a, 0, sizeof(a));

    for(i=0;i<n;i++){
    	cin >> x;a[x]+=x;
    	}
    for (i=2;i<100001;i++)
    	a[i]=max(a[i-1],a[i-2]+a[i]);
   
    cout << a[i-1]<<endl;
	
}
// memset(arr, 0, sizeof(arr));
return 0;
}

