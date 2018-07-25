// #include <bits/stdc++.h>
// #include<string>
// using namespace std;
// //cout<<"\n" instead of endl;
// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     string input;
//     int start,end,len,iptr,jptr,mxIn,mnIn,i,j,sol=0;
//     int siz,max=-1,min=9888880;cin>>siz;
//     int arr[siz];
//     for(i=0;i<siz;i++){
//       scanf("%d",&arr[i]);
//       (arr[i]>max)? max = arr[i],mxIn=i:0;
//
//       (arr[i]<=min)?min = arr[i],mnIn = i:0;
//     }
//   cout<<mxIn + siz - mnIn -1 -(mxIn>mnIn);
// // cout<<max<<min<<mxIn<<mnIn;
//
//     return 0;
// }
#include<iostream>
using namespace std;
int n,i,p,q=99,x,a,b;
int main()
{
    for(cin >> n; i++ < n;)
    cin >> x,x > p ? p = x, b = i : 0 ,x <= q ? q = x, a = i : 0;
    cout << b + n - a - 1 - (b > a);
    return 0;
}
