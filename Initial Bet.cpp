#include <bits/stdc++.h>
#include <fstream>
#define pb push_back
using namespace std;
int n,t,ans;
char input[100];
int main(){
	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
	
	while(scanf("%d",&n)!=EOF){
		int sum = 0;
		sum += n;
		n -= 1;
		for(int i=1;i<5;i++){
			cin>>t;
			sum  += t;
		}
		ans = (sum%5==0 && sum!=0)`?sum/5:-1;
		cout<<ans<<'\n';
	} 
return 0;
}

// iterator 
// for(auto const&sol1:v)
// 	cout<<sol1<<" ";







