#include<stdio.h>
#include<process.h>
#include<stdlib.h>
#include<string.h>
int *p;                                               //ȫ�ֱ���
int q;
struct account
{
	int num;
	char name[20];
	int mm;
	float money;
}str[3]={{101,"����",123,100},{102,"����",456,100},{103,"����",789,100}};

void s()                                              //ˢ���û�����
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

void welcome()                        //��ӭ����ATMϵͳ
{
	printf("***********************************************\n\t��ӭ����������ATM��\t\n   Welcome to the romantic ATM machine\t\n***********************************************\n");
}

void enter1()                           //����ϵͳ�������˺�����
{
	void welcome();
	void s6();
	int judge(int zh,int password);
	int i,j,zh,password,times=1;
	int a;
	for(i=0;i<3;i++)
	{
		printf("�˻����������˻�������0���п�����");
		scanf("%d",&zh);
		if(zh==0)
		{
			system("cls");
			s6();
		}
		printf("���룺");
		scanf("%d",&password);
		j=judge(zh,password);
		if(j)
		{
			printf("��¼�ɹ���");
			system("pause");
			system("cls");
			break;
		}
		else
		{
			printf("�˻�������������������룡\n");
			system("pause");
	        system("cls");
			times++;
			if(times==4)
			{
				printf("�������Σ����˳�ϵͳ��\n");
				system("pause");
				system("cls");
				welcome();
			}
		}
	}
}

int language()                      //��ѡ������
{
	int a;
	printf("��ѡ��������Ҫ������1.���� 2.Ӣ��\nPlease select the language you want1.Chinese 2.English\n");
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

int judge(int a,int b)               //�ж��˺������Ƿ���ȷ
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

void dating1()                             //������Ҫ����
{
	void s1();
	void s2();
	void s3();
	void s4();
	void s5();
	void s6();
	void end();
	int i;
	printf("��ѡ������Ҫ���еĹ���1.��ѯ��Ϣ2.�޸�����3.ת��4.���5.ȡ��6.�˳�\n");
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

void s1()                                                      //����һ��ѯ��Ϣ
{
	void end();
	int i;
	printf("%d\t%s\t%f\n",str[q].num,str[q].name,str[q].money);
	system("pause");
	system("cls");
	printf("��ѡ������Ҫ�Ĳ���\n1.����������2.����\n");
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

void s2()                                                       //���ܶ��޸�����
{
	void dating1();
	void end();
	void s();
	int a,b,c,d;
	printf("���������ľ����룺");
	scanf("%d",&a);
	if(a==str[q].mm)
	{
cx3:
		printf("���������������룺");
		scanf("%d",&b);
		system("cls");
		printf("���ٴ�ȷ����������");
		scanf("%d",&c);
		if(b==c)
		{
			printf("�����޸ĳɹ������μ��������룡");
			str[q].mm=b;
			s();
			system("pause");
			system("cls");
			printf("��ѡ������Ҫ�Ĳ���\n1.����������2.����\n");
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
			printf("��������벻һ�£����������룡");
			goto cx3;
		}
	}
	else
	{
		printf("����������벻�ԣ����������룡");
		system("pause");
		system("cls");
		s2();
	}
}

void s3()                                                //������ת��
{
	int tiqu(int a);
	void end();
	int s31(int a);
	int i,j,c,d;
	float b;
	printf("����������Ҫת�˵��û���\n");
	scanf("%d",&c);
	j=tiqu(c);
	if(j==q)
	{
		printf("�޷�ת���Լ��������²�����");
		system("pause");
		system("cls");
		s3();
	}
	i=s31(c);
	if(i)
	{
		printf("������ת�˽�");
		scanf("%f",&b);
		if(str[q].money>=b)
		{
			system("cls");
			printf("ת�˳ɹ���\n");
			str[q].money=str[q].money-b;
			str[j].money=str[j].money+b;
			printf("�������Ϊ��%f\n",str[q].money);
			s();
			system("pause");
			system("cls");
			printf("��ѡ������Ҫ�Ĳ���\n1.����������2.����\n");
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
			printf("�������㣡�����²�����");
			system("pause");
			system("cls");
			s3();
		}
	}
}

int s31(int a)                                   //�������Ӻ���1
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
	printf("ת���û������ڣ����������룡");
	system("pause");
	system("cls");
	s3();
}

void s4()                                             //�����Ĵ��
{
	void end();
	void dating1();
	int a;
	void s();
	float i;
	printf("������");
	scanf("%f",&i);
	str[q].money=str[q].money+i;
	printf("�������Ϊ��%f",str[q].money);
	system("pause");
	system("cls");
	printf("��ѡ������Ҫ�Ĳ���\n1.����������2.����\n");
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

void s5()                                             //������ȡ��
{
	void end();
	void dating1();
	int a;
	void s();
	float i;
	printf("��ȡ���\n");
	scanf("%f",&i);
	if(i<=str[q].money)
	{
		str[q].money=str[q].money-i;
		printf("�������Ϊ��%f",str[q].money);
		system("pause");
	    system("cls");
	    printf("��ѡ������Ҫ�Ĳ���\n1.����������2.����\n");
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
		printf("�����˻����㣬�����²�����");
		system("pause");
		system("cls");
		s5();
	}
}

void s6()                                                     //��������
{
	void end();
	void dating1();
	int s61(int a);
	int a,b,c,d,x;
	char i[20],j[20];
	FILE *fp;
	printf("������������������ȷ���ֻ��ţ�\n");
	scanf("%s%s",&i,&j);
	if(strlen(j)==11)
	{
cx1:
		printf("�����ɹ��������������˻���");
		scanf("%d",&a);
		b=s61(a);
		if(b==1)
		{
cx2:
			printf("�������������룡");
			scanf("%d",&c);
			system("cls");
			printf("���ٴ������������룡");
			scanf("%d",&d);
			system("cls");
			if(c==d)
			{
				printf("��ϲ�������ɹ������ס�����˻�%d������%d",a,c);
				system("pause");
	            system("cls");
	            printf("��ѡ������Ҫ�Ĳ���\n1.����������2.����\n");
	            scanf("%d",&x);
				if(x==1)
					dating1();
				if(x==2)
					end();
			}
			else
			{
				printf("��������������벻һ�£����������룡");
				system("pause");
				system("cls");
				goto cx2;
			}
		}
		else
		{
			printf("��Ǹ����������˻��ѱ�ռ�ã����������룡");
			system("pause");
			system("cls");
			goto cx1;
		}
	}
}

int s61(int a)                                                    //���������Ӻ���1
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
	printf("����");
}

int tiqu(int a)                                       //���û����±���ȡ����
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
	welcome();                                        //����welcome����
	system("pause");
	system("cls");
    i=language();                                   //����language����
	system("cls");
	if(i==1)
	{
		printf("��ӭʹ�ã�\n");                      //����ϵͳ
		system("pause");
     	system("cls");
		enter1();                                    //����enter1����
		dating1();
	}
	if(i==2)
	{
		printf("Welcome to use��\n");                   //Ӣ��ϵͳ
	}
}