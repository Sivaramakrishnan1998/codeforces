#include<bits/stdc++.h>
using namespace std;
#define sd(n) scanf("%d", &n)
#define pf(n) printf("%d", n)
#define pstr(s) printf("%s\n",s)
#define pc(s) printf("%c",s)
int main(){ 

	int n;
	
	char match[][8] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};

    sd(n);
    while(n>5)
    	n = n/2 - 2;

    pstr(match[n-1]);
	return 0;
}