#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int josephus(int n,int k){
	if(n==1)
		return 1;
	else
		return ((josephus(n-1,k)+k-1)%n+1);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int t,start,end,len,iptr,jptr,i=1,j;
    cin>>t;
    int n,k;
    while(i<=t){
    
    cin>>n>>k;
    printf("Case %d : %d",i,josephus(n,k));
    i++;
  }
    return 0;
}
