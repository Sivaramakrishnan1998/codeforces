#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int num,hei,t,count=0;
    cin>>num>>hei;

    while(num--){
    	cin>>t;
    	count += (t>hei)?2:1;
    }
    cout<<count;
  
    return 0;
}
