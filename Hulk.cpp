#include <bits/stdc++.h>
#include <fstream>
using namespace std;

int main()
{
	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
	int n;
	while(scanf("%d",&n)!=EOF){
		int count = 0;
		for(int i=0;i<n;i++){
			(i%2!=0)?cout<<"I love ":cout<<"I hate ";
			count++;
			(count==n)?cout<<"it\n":cout<<"that ";

		
		}
	}
	return 0;
}