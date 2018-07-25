#include <bits/stdc++.h>
#include<string>
#include<cstdlib>
using namespace std;
//cout<<"\n" instead of endl;
int compare(const void*a,const void*b){
  return (*(int *)a-*(int *)b);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string input;
    int start,end,len,iptr,jptr,i,j;
    int num;
    scanf("%d",&num);
    int arr[num];
    for(i=0;i<num;scanf("%d",&arr[i]),i++);
    qsort(arr,num,sizeof(int),compare);

    for(i=0;i<num;printf("%d ",arr[i]),i++);

    return 0;
}
