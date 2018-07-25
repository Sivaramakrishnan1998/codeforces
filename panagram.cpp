#include <bits/stdc++.h>
#include<string>
using namespace std;
//cout<<"\n" instead of endl;
int main()
{
    int siz;
    cin>>siz;
    string input;
    char ch;
    cin>>input;
    int start,end,len,iptr,jptr,i,j,flag =0;

    int Freq[26]={0};
      for(i=0;i<siz;i++){

      int val = input[i]-'A';
      if(val>25) {
      ch = (input[i]-32);
      val =  ch-'A';
      }
      Freq[val]++;
    }
    for(i=0;i<26;i++){
    flag+=(Freq[i]>0)?1:0;
    }
    cout<<((flag!=26)?"NO":"YES");
    return 0;
}
