#include<stdio.h>
int main ()
{
	char a[]="2*2/4*1/1*2*3/2";
	int x,i,sum=a[0]-'0';
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]=='*')
		{
			x=a[i+1]-'0';
			sum=sum*x;
			i++;
		}
		else if(a[i]=='/')
		{
			x=a[i+1]-'0';
			sum=sum/x;
			i++;
		}
	}
	printf("%d\n",sum);
	return 0;
}


