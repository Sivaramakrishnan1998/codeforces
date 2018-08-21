#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
    int n,a,b,c;
	while(scanf("%d %d %d %d",&n,&a,&b,&c)!=EOF){
		int x =0;
		for(int i=0;i<=n;i++){
			for(int j =0;j<=n;j++){
				int v1 = n - a*i - b*j;

				if(v1>=0 && v1%c==0){
					int v2 = i +j +v1/c;
					x = max(x,v2);
				}
			}
		}
		cout<<x<<'\n';
	}
	return 0;
}