#include <bits/stdc++.h>
#include <fstream>
#define pb push_back
using namespace std;
int n,t,sum;
char input[100];
int main(){
	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
	
	while(scanf("%d",&n)!=EOF){
		std::vector<int> v;
		for(int i=0;i<n;i++)
			cin>>t,v.pb(t);
		sort(v.begin(), v.end());
		int key = v[n-1];
        sum = 0;
		for(int i=0;i<n-1;i++){
			if(v[i]!=key){
				sum += key - v[i];
			}
		}
		cout<<sum<<endl;
	}
return 0;
}

// iterator 
// for(auto const&sol1:v)
// 	cout<<sol1<<" ";







