#include <bits/stdc++.h>
int count1=0,count2=0,count3=0,c1=0,c2=0,c3=0;

int ribbon(int n,int a,int b,int c){
	if(n==0)
		return 1;
	if(a>n||b>n||c>n){
		return 0;
	}
	if(n==0)
		return 1;
	printf("%d\t%d\t%d\n",n-a,n-b,n-c);
c1 += ribbon(n-a,a,b,c);
c2 += ribbon(n-b,a,b,c);
c2 += ribbon(n-c,a,b,c);

}
int main(int argc, char const *argv[])
{
	ribbon(10,3,4,5);
	printf()	return 0;
}