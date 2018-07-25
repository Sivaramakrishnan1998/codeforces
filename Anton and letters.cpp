#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int start,end,len,iptr,jptr,i,j;
    char c;
    set<char>Anton;
    cin>>c;

    while(c!='}'){
      cin>>c;
      if(c==','||c==' ') continue;
      else
      Anton.insert(c);
    }
    cout<<Anton.size()-1;
    return 0;
}
