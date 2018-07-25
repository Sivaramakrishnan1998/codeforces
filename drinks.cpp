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
    double siz;
    cin>>siz;
    double t,sum=0;
    for(i=0;i<siz;i++)
    {
      cin>>t;
      sum+=t/100;
    }


  printf("%0.12lf",(sum/siz)*100);
    return 0;
}
