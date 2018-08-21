#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main()
{
	#ifdef LOCAL_DEFINE
	freopen("input.txt","rt",stdin);
	#endif
	int n,ridesM,cost1,costM,m1,mm,mm2,cost1M;
	while(scanf("%d",&n)!=EOF){
		cin>>ridesM>>cost1>>costM;
		m1 = n * cost1;
		cost1M = costM/ridesM;
		mm = n/ridesM*costM + min(n%ridesM*cost1,costM);
		
		cout<<min(m1,mm)<<endl	;
	}
	return 0;
}
