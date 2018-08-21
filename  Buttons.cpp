#include <bits/stdc++.h>
#include <fstream>
#define pb push_back
using namespace std;
long long int n,t,i,sum;
char input[100];
int main(){
	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
	
	while(scanf("%lld",&n)!=EOF){
		sum = 0;
	 for(i=1;i<n;i++){
	 	sum += i*(n-i);
	 }	
	 cout<<sum + n<<endl;
	}
return 0;
}

// iterator 
// for(auto const&sol1:v)
// 	cout<<sol1<<" ";







