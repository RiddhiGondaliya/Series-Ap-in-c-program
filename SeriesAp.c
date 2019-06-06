#include <stdio.h>

int main() {
	//code
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
	    int a,b,n,x,d;
	    scanf("%d %d", &a,&b);
	    scanf("%d",&n);
	    d=(b-a);
	    x=a+(d*(n-1));
	    printf("%d\n",x);
	    scanf("\n");
	}
	
	return 0;
}
