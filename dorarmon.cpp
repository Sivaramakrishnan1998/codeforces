#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,n,lim,len,iptr,jptr,i,j,div;

    cin>>n>>lim;

    if(lim>n) cout<<"-1";

   for(i=(n+1)/2;i<=n;i++){
   	if(i%lim==0){
   		cout<<i;
   		return 0;
   	}
   }


    return 0;
}
