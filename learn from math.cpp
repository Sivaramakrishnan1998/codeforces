#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int isPrime(long long int num){
  long long int ind;
  for(ind= 2;ind<=sqrt(num);ind++){
    while(num%ind==0)
    return 0;
  }
  return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j;
    long long temp,num;
    cin>>num;
    temp = num;
    if(num%2==0&&isPrime(num/2)==0) cout<<num/2<<" "<<num/2;
    else{

      for(i=4,num =  num-4;i!=temp&&num>=4;i++,num--)
      {
        if(isPrime(i)==0&&isPrime(num)==0){
          cout<<i<<" "<<num;
          return 0;
        }
      }
    }


    return 0;
}
