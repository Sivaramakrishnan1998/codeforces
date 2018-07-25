#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j,o,e;
    int num;cin>>num;
    int even[num],odd[num],t;
    j = iptr = jptr =o=e =0;
    for(i=0;i<num;i++)
    {
      cin>>t;
      if(t%2==0){
        even[e]= i+1;
        e++;

      }
      else{
        odd[o] = i+1;
        o++;

      }
    }

    //cout<<iptr<<jptr;
   int ans=(e-1<o-1)?even[0]:odd[0];cout<<ans;

    return 0;
}
