#include<bits/stdc++.h>
using namespace std;
int compare(const void*a,const void*b)
{
  return (*(int *)a-*(int *)b);
}

int main()
{
  int size,num;
  cin>>num>>size;
  int arr[size],i,start,end;
  for(i=0;i<size;cin>>arr[i],i++);

  qsort(arr,size,sizeof(int),compare);

  int min = arr[size-1]-arr[0],temp;

  for(start=0,end=num-1;end<size;start++,end++){
    temp = arr[end]-arr[start];
    if(temp<min)
    min = temp;
  }
  cout<<min;
  return 0;

}
