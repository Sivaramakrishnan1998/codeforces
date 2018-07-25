#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    int start,end,len,iptr,jptr,i,j,size,A=0,D=0;

    cin>>size>>str;

    for(i=0;str[i];i++){
      (str[i]=='A')?A++:D++;
    }
    if(A>D)cout<<"Anton";
    else if(D>A)cout<<"Danik";
    else cout<<"Friendship";
    return 0;
}
