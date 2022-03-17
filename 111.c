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
	printf("上：w 右：d 左：a 下：s\n");
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
			printf("恭喜，成功通过！,用时%d秒",time(0)-s);
			break; 
		} 
	}
}
#包括<stdio.h>
#包括<windows.h>
#包括<conio.h>
#包括<stdlib.h>
#包括<time.h>
查尔图[9][12]={
“*”，
“*#**”，
“#*”
“*”
“*”，
“#*#”，
“*E”，
“*##**”
“*”，
}；
INT curX=0，Cury=0；
无效设置颜色(无符号int颜色)
{
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE)，颜色)；
}
VoidprintPerson()
{
COORD pos；
Pos.X=curX；
Y=Cury；
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE)，pos)；
Printf(“i”)；
}
VoidprintMap()
{
INT I，j；
对于(i=0；i<9；i++)
{
对于(j=0；j<12；j++)
{
Printf(“%c”，map[i][j])；
}
Printf(“\n”)；
}
}
空移(焦炭)
{
开关(DIR)
{
案件“W”：
库里-；
若(Cury<0)Cury=0；
如果(map[Cury][curX]=‘#’)Cury++；
中断；
案件：
Cury++；
若(Cury>=9)Cury=9-1；
如果(映射[cury][curX]=‘#’)cury-；
中断；
“a”案：
Curx-；
If(curX<0)curX=0；
如果(map[Cury][curX]=‘#’)curX++；
中断；
案件“d”：
CurX++；
若(curX>=11)curX=11-1；
如果(映射[cury][curX]=‘#’)curX-；
中断；
}
}
空主()
{
第二，第二部分；
系统(“彩色f9”)；
Printf(“上：W右：d左：a下：s\n”)；
系统(“暂停”)；
时间t_s=时间(0)；
同时(1)
{
系统(“CLS”)；
设置颜色(7)；
PrintMap()；
设置颜色(4)；
PrintPerson()；
Dir=Getch()；
移动(Dir)；
如果(映射[Cury][curX]=‘E’)
{
Printf(恭喜，成功通过！，用时%d秒，time(0)-s)；
中断；
}
}
}

