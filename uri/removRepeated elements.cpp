#include <bits/stdc++.h>
#include <fstream>
#define pb push_back
using namespace std;

int main(){
	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
	int n1,n2,t;
	while(scanf("%d",&n1)!=EOF){
		std::vector<int> vec;
		std::unordered_set<int> s;
		cin>>n2;
		while(n1--)
			cin>>t,vec.pb(t);
		while(n2--)
			cin>>t,vec.pb(t);

		//vec.erase(unique(vec.begin(), vec.end()),vec.end());

		for(int i:vec){
			s.insert(i);
		}

		vec.assign(s.begin(),s.end());

		for(auto const & c:vec)
			cout<<c<<" ";

	}
	return 0;
}