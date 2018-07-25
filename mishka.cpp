
#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j,mi,chris,m=0,c=0;
    int t;cin>>t;
    while(t--)
    {
    	cin>>mi>>chris;

    	if(mi>chris)
    		m++;
    	if(chris>mi)
    		c++;
    }
    if(m>c)cout<<"Mishka";
    if(c>m)cout<<"Chris";
    if(c==m) cout<<"Friendship is magic!^^";
  
    return 0;
}
