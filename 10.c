#include <stdio.h>
int main()
{
      int sum=0;
      int i;
      int money;
	  int count;
	  //tf("请输入金钱:",money);
	 //anf("%d",&money);
	  
	  for(i=1;i<=50;i++)
	  { 	  
printf("请输入金钱:",money);scanf("%d",&money);
		  sum=sum+money;
		   if(sum>=1000)
		  { 
		  break;
		  }
		  count++;
	  }
	  printf("捐款总数:%d,捐款人数:%d,平均没人捐款数目:%f",sum,count,(float)sum/count);
         return 0;
}