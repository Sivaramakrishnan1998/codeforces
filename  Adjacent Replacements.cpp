#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j;
    int n;cin>>n;
    while(n--)
    {
      cin>>i;
      if(i%2==0){
        cout<<~(-i);
      }else
      cout<<i;
      cout<<" ";
    }

    return 0;
}
