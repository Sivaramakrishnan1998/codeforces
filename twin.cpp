#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

int compare(const void*a,const void *b)
{
  return (*(int*)a - *(int *)b);
}

int main()
{
  int num,sum=0,input;
  char ch;
  cin>>num;
  int arr[101],i=0;

  for(i=0;i<num;i++)
  {
    cin>>input;
    arr[i]=input;
    sum += input;


  }
   qsort(arr,num,sizeof(int),compare);
//  sort(arr,arr+num);

  //for(i=0;i<num;printf("%d ",arr[i]),i++);
  int half = sum/2,max=0,count=0;

  while(max<=half)
  {
    count++;
    //cout<<count;
    max = max + arr[num-count];
  }

  cout<<count;
  return 0;

}
