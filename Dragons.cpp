#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d", &n)
#define pf(n) printf("%d", n)
#define pstr(s) printf("%s\n",s)
#define pc(s) printf("%c",s)
#define pb push_back
int main(){
	int s,n,flag=1,pow,bonus;
	std::vector< pair <int,int> >v;
	cin>>s>>n;
	while(n--){
		cin>>pow>>bonus;
		v.pb(make_pair(pow,bonus));
		}

	sort(v.begin(),v.end());	
	int len = v.size();

	for(int i=0;i<v.size();i++){
		if(v[i].first<s){
			s += v[i].second;
		}
	    else{
	    	cout<<"NO";
	    	return 0;
	    }
    }

cout<<"YES";
return 0;
}