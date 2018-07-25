#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str1,str2,str3,s,input;
    int start,end,len,iptr,jptr,i,j;

    cin>>str1>>str2>>str3;

    
    std::sort(str3.begin(),str3.end());
    s = str1 + str2;
    std::sort(s.begin(),s.end());
    if(s==str3)
    	cout<<"YES";
    else
    	cout<<"NO";




  
    return 0;
}
