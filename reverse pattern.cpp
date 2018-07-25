#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j,count=0;

    int num,org,copy,column,lim,dup;
    cin>>num;
    copy = org =column= num;

    int val = (num*num + num)/2;
    lim = end =dup= val;
    for(i=0;i<lim;i++){

    	cout<<dup<<" ";
    	dup -= copy;
    	copy--;
    	count++;
    	if(count==column){
    		cout<<'\n';
    		count = 0;
    		column--;
    		end--;	
    		dup = end;
    		copy = org;
    	}

    }
  
    return 0;
}
