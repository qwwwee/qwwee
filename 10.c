#include <stdio.h>
int main()
{
      int sum=0;
      int i;
      int money;
	  int count;
	  //tf("�������Ǯ:",money);
	 //anf("%d",&money);
	  
	  for(i=1;i<=50;i++)
	  { 	  
printf("�������Ǯ:",money);scanf("%d",&money);
		  sum=sum+money;
		   if(sum>=1000)
		  { 
		  break;
		  }
		  count++;
	  }
	  printf("�������:%d,�������:%d,ƽ��û�˾����Ŀ:%f",sum,count,(float)sum/count);
         return 0;
}