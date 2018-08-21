#include <bits/stdc++.h>
#include <cstring>
using namespace std;
int main()
{

	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
	char sr[400];
	int size;
	string str;	
	while(scanf("%d",&size)!=EOF){
		cin>>str;
		int count =0,i,j;
		sort(str.begin(),str.end());
		int lim = str.size()/2;
		
		for(i=0,j=str.size()-1;i<lim;i++,j--){
			if((str[i]=='0'&&str[j]=='1')){
				str[i]= str[j] ='k';
			}
		}
		for(i=0;i<str.size();i++){
			if(str[i]!='k')
				count++;
		}
		cout<<count<<'\n';
	}
return 0;
}