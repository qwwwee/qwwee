#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
int *p;                                               //全局变量
int q;
struct account
{
	int num;
	char name[20];
	int mm;
	float money;
}str[3]={{101,"张三",123,100},{102,"李四",456,100},{103,"王五",789,100}};

void s()                                              //刷新用户数据
{
	int i;
	FILE *fp;
	fp=fopen("C:\\Users\\chen\\xx.txt","w");
	for(i=0;i<3;i++)
	{
		fscanf(fp,"%d\t%s\t%d\t%f\n",&str[i].num,&str[i].name,&str[i].mm,&str[i].money);
		printf("%d\t%s\t%d\t%f\n",str[i].num,str[i].name,str[i].mm,str[i].money);
	}
	fclose(fp);
}

void welcome()                        //欢迎进入ATM系统
{
	printf("***********************************************\n\t欢迎来到浪漫のATM机\t\n   Welcome to the romantic ATM machine\t\n***********************************************\n");
}

void enter1()                           //进入系统，输入账号密码
{
	void welcome();
	void s6();
	int judge(int zh,int password);
	int i,j,zh,password,times=1;
	int a;
	for(i=0;i<3;i++)
	{
		printf("账户：（若无账户请输入0进行开户）");
		scanf("%d",&zh);
		if(zh==0)
		{
			system("cls");
			s6();
		}
		printf("密码：");
		scanf("%d",&password);
		j=judge(zh,password);
		if(j)
		{
			printf("登录成功！");
			system("pause");
			system("cls");
			break;
		}
		else
		{
			printf("账户或密码错误！请重新输入！\n");
			system("pause");
	        system("cls");
			times++;
			if(times==4)
			{
				printf("错误三次，将退出系统！\n");
				system("pause");
				system("cls");
				welcome();
			}
		}
	}
}

int language()                      //请选择语言
{
	int a;
	printf("请选择你所需要的语言1.中文 2.英文\nPlease select the language you want1.Chinese 2.English\n");
	scanf("%d",&a);
	if(a==1)
	{
		return a;
	}
	if(a==2)
	{
		return a;
	}
}

int judge(int a,int b)               //判断账号密码是否正确
{
	int i;
	for(i=0;i<100;i++)
	{
		if(a==str[i].num&&b==str[i].mm)
		{
			p=&i;
			q=*p;
			return 1;
		}
	}
	return 0;
}

void dating1()                             //汉语主要功能
{
	void s1();
	void s2();
	void s3();
	void s4();
	void s5();
	void s6();
	void end();
	int i;
	printf("请选择你想要进行的功能1.查询信息2.修改密码3.转账4.存款5.取款6.退出\n");
	scanf("%d",&i);
	system("cls");
	switch(i)
	{
	case 1:s1();
	case 2:s2();
	case 3:s3();
	case 4:s4();
	case 5:s5();
	case 6:end();
	}
}

void s1()                                                      //功能一查询信息
{
	void end();
	int i;
	printf("%d\t%s\t%f\n",str[q].num,str[q].name,str[q].money);
	system("pause");
	system("cls");
	printf("请选择您想要的操作\n1.返回主大厅2.结束\n");
	scanf("%d",&i);
	system("cls");
	if(i==1)
	{
		dating1();
	}
	if(i==2)
	{
		end();
	}
}

void s2()                                                       //功能二修改密码
{
	void dating1();
	void end();
	void s();
	int a,b,c,d;
	printf("请输入您的旧密码：");
	scanf("%d",&a);
	if(a==str[q].mm)
	{
cx3:
		printf("请输入您的新密码：");
		scanf("%d",&b);
		system("cls");
		printf("请再次确认您的密码");
		scanf("%d",&c);
		if(b==c)
		{
			printf("密码修改成功！请牢记您的密码！");
			str[q].mm=b;
			s();
			system("pause");
			system("cls");
			printf("请选择您想要的操作\n1.返回主大厅2.结束\n");
			scanf("%d",&d);
			system("cls");
			if(d==1)
			{
				dating1();
			}
			if(d==2)
			{
				end();
			}
		}
		else
		{
			printf("输入的密码不一致，请重新输入！");
			goto cx3;
		}
	}
	else
	{
		printf("您输入的密码不对，请重新输入！");
		system("pause");
		system("cls");
		s2();
	}
}

void s3()                                                //功能三转账
{
	int tiqu(int a);
	void end();
	int s31(int a);
	int i,j,c,d;
	float b;
	printf("请输入您想要转账的用户：\n");
	scanf("%d",&c);
	j=tiqu(c);
	if(j==q)
	{
		printf("无法转给自己！请重新操作！");
		system("pause");
		system("cls");
		s3();
	}
	i=s31(c);
	if(i)
	{
		printf("请输入转账金额：");
		scanf("%f",&b);
		if(str[q].money>=b)
		{
			system("cls");
			printf("转账成功！\n");
			str[q].money=str[q].money-b;
			str[j].money=str[j].money+b;
			printf("您的余额为：%f\n",str[q].money);
			s();
			system("pause");
			system("cls");
			printf("请选择您想要的操作\n1.返回主大厅2.结束\n");
			scanf("%d",&d);
			system("cls");
			if(d==1)
			{
				dating1();
			}
			if(d==2)
			{
				end();
			}
		}
		else
		{
			printf("您的余额不足！请重新操作！");
			system("pause");
			system("cls");
			s3();
		}
	}
}

int s31(int a)                                   //功能三子函数1
{
	void s3();
	int i;
	for(i=0;i<100;i++)
	{
		if(a==str[i].num)
		{
			return 1;
		}
	}
	printf("转账用户不存在，请重新输入！");
	system("pause");
	system("cls");
	s3();
}

void s4()                                             //功能四存款
{
	void end();
	void dating1();
	int a;
	void s();
	float i;
	printf("请存入金额：");
	scanf("%f",&i);
	str[q].money=str[q].money+i;
	printf("您的余额为：%f",str[q].money);
	system("pause");
	system("cls");
	printf("请选择您想要的操作\n1.返回主大厅2.结束\n");
	scanf("%d",&a);
	system("cls");
	if(a==1)
	{
		dating1();
	}
	if(a==2)
	{
		end();
	}
}

void s5()                                             //功能五取款
{
	void end();
	void dating1();
	int a;
	void s();
	float i;
	printf("请取款金额！\n");
	scanf("%f",&i);
	if(i<=str[q].money)
	{
		str[q].money=str[q].money-i;
		printf("您的余额为：%f",str[q].money);
		system("pause");
	    system("cls");
	    printf("请选择您想要的操作\n1.返回主大厅2.结束\n");
	    scanf("%d",&a);
		system("cls");
		if(a==1)
		{
			dating1();
		}
		if(a==2)
		{
			end();
		}
	}
	else
	{
		printf("您的账户余额不足，请重新操作！");
		system("pause");
		system("cls");
		s5();
	}
}

void s6()                                                     //开户功能
{
	void end();
	void dating1();
	int s61(int a);
	int a,b,c,d,x;
	char i[20],j[20];
	FILE *fp;
	printf("请输入您的姓名和正确的手机号！\n");
	scanf("%s%s",&i,&j);
	if(strlen(j)==11)
	{
cx1:
		printf("开户成功，请输入您的账户！");
		scanf("%d",&a);
		b=s61(a);
		if(b==1)
		{
cx2:
			printf("请输入您的密码！");
			scanf("%d",&c);
			system("cls");
			printf("请再次输入您的密码！");
			scanf("%d",&d);
			system("cls");
			if(c==d)
			{
				printf("恭喜您开户成功！请记住您的账户%d和密码%d",a,c);
				system("pause");
	            system("cls");
	            printf("请选择您想要的操作\n1.返回主大厅2.结束\n");
	            scanf("%d",&x);
				if(x==1)
					dating1();
				if(x==2)
					end();
			}
			else
			{
				printf("您两次输入的密码不一致，请重新输入！");
				system("pause");
				system("cls");
				goto cx2;
			}
		}
		else
		{
			printf("抱歉！您输入的账户已被占用，请重新输入！");
			system("pause");
			system("cls");
			goto cx1;
		}
	}
}

int s61(int a)                                                    //开户功能子函数1
{
	int i;
	for(i=0;i<100;i++)
	{
		if(a==str[i].num)
		{
			return 0;
		}
	}
	return 1;
}

void end()
{
	printf("掰掰");
}

int tiqu(int a)                                       //将用户的下标提取出来
{
	int i;
	for(i=0;i<100;i++)
	{
		if(a==str[i].num)
		{
			return i;
		}
	}
}

void main()
{
	int i;
	welcome();                                        //调用welcome函数
	system("pause");
	system("cls");
    i=language();                                   //调用language函数
	system("cls");
	if(i==1)
	{
		printf("欢迎使用！\n");                      //中文系统
		system("pause");
     	system("cls");
		enter1();                                    //调用enter1函数
		dating1();
	}
	if(i==2)
	{
		printf("Welcome to use！\n");                   //英文系统
	}
}