#include<stdio.h>
int main ()
{
	char a[]="2+2*3+2/2-1";
	int x,b,d,f,W;
	x=a[0]-'0';
	b=(a[2]-'0')*(a[4]-'0');
	
	d=(a[6]-'0')/(a[8]-'0');
	
	f=a[10]-'0';
	W=x+b+d-f;
	printf("%d\n",W);

	return 0;
}
