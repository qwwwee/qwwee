#include<stdio.h>
#include<windows.h>   
#include<conio.h>    
#include<stdlib.h>
#include<time.h>
char map[9][12]={   
"*#*********",
"***###*###*",
"###**#****#",
"*#**###**#*",
"***********",
"#####*##*##",
"**#*****#*E",
"***#*###**#",
"*#*********",
};
int curX=0,curY=0;   
void setcolor(unsigned int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
}
void printPerson()
{
	COORD pos;    
	pos.X = curX ;
	pos.Y = curY ;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
	printf("i");
}
void printMap()
{
	int i,j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<12;j++)
		{
			printf("%c",map[i][j]);
		}
		printf("\n");
	}
}
void Move(char dir)
{
switch(dir)
	{
		case 'w':
			curY--;
			if(curY<0) curY=0;
			if(map[curY][curX]=='#') curY++;
			break;
		case 's':
			curY++;
			if(curY>=9) curY=9-1;
			if(map[curY][curX]=='#') curY--;
			break;
		case 'a':
			curX--;
			if(curX<0) curX=0;
			if(map[curY][curX]=='#') curX++;
			break;
		case 'd':
			curX++;
			if(curX>=11) curX=11-1;
			if(map[curY][curX]=='#') curX--;
			break;	
	}
}
int main()
{
	char dir;
	system("color f9");
	printf("�ϣ�w �ң�d ��a �£�s\n");
	system("pause");
	time_t s=time(0);
	while(1)
	{
		system("cls");
		setcolor(7);
		printMap();
		setcolor(4);
		printPerson();		
		dir=getch();         
		Move(dir);
		if(map[curY][curX]=='E')
		{
			printf("��ϲ���ɹ�ͨ����,��ʱ%d��",time(0)-s);
			break; 
		} 
	}
}
#����<stdio.h>
#����<windows.h>
#����<conio.h>
#����<stdlib.h>
#����<time.h>
���ͼ[9][12]={
��*����
��*#**����
��#*��
��*��
��*����
��#*#����
��*E����
��*##**��
��*����
}��
INT curX=0��Cury=0��
��Ч������ɫ(�޷���int��ɫ)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE)����ɫ)��
}
VoidprintPerson()
{
COORD pos��
Pos.X=curX��
Y=Cury��
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE)��pos)��
Printf(��i��)��
}
VoidprintMap()
{
INT I��j��
����(i=0��i<9��i++)
{
����(j=0��j<12��j++)
{
Printf(��%c����map[i][j])��
}
Printf(��\n��)��
}
}
����(��̿)
{
����(DIR)
{
������W����
����-��
��(Cury<0)Cury=0��
���(map[Cury][curX]=��#��)Cury++��
�жϣ�
������
Cury++��
��(Cury>=9)Cury=9-1��
���(ӳ��[cury][curX]=��#��)cury-��
�жϣ�
��a������
Curx-��
If(curX<0)curX=0��
���(map[Cury][curX]=��#��)curX++��
�жϣ�
������d����
CurX++��
��(curX>=11)curX=11-1��
���(ӳ��[cury][curX]=��#��)curX-��
�жϣ�
}
}
����()
{
�ڶ����ڶ����֣�
ϵͳ(����ɫf9��)��
Printf(���ϣ�W�ң�d��a�£�s\n��)��
ϵͳ(����ͣ��)��
ʱ��t_s=ʱ��(0)��
ͬʱ(1)
{
ϵͳ(��CLS��)��
������ɫ(7)��
PrintMap()��
������ɫ(4)��
PrintPerson()��
Dir=Getch()��
�ƶ�(Dir)��
���(ӳ��[Cury][curX]=��E��)
{
Printf(��ϲ���ɹ�ͨ��������ʱ%d�룬time(0)-s)��
�жϣ�
}
}
}

