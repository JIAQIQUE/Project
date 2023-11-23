#include<stdio.h>
#include<string.h>//包含头文件string.h
#include <stdlib.h>
#define MAX 60//定义MAX最大值为60 
#include "Student.h"

//void printf_Mainmenu()//老师、同学端口选择 
//{
//	printf("        学生心理咨询系统        \n");
//	printf("------------------------------\n")
//	printf("|1、--------老师-------------|\n");
//	printf("|2、--------学生-------------|\n");
//	printf("|----------------------------|\n");
//	printf("    请输入相应的序号选择!     \n");
//}



void printf_evaluate()
{	char a;
	int *total;
	int b=0;
	*total =&b;
	printf("----------心理健康测试-----------\n");

	printf("问题一：最近是否因为一些事而烦恼\na:最近一周内出现这种情况的日子不超过一天 (0分)\nb:最近一周内曾有1-2天出现这种情况 (1分)\nc:最近一周内曾有3-4天出现这种情况 (2分)\nd:最近一周内曾有5-7天出现这种情况 (3分)\n");
	scanf("%c",&a);
	getchar();
	printf_sum(a,&b);
	
	printf("问题二：最近是否胃口不好，不大想吃东西\na:最近一周内出现这种情况的日子不超过一天 (0分)\nb:最近一周内曾有1-2天出现这种情况 (1分)\nc:最近一周内曾有3-4天出现这种情况 (2分)\nd:最近一周内曾有5-7天出现这种情况 (3分)\n");
	scanf("%c",&a);
	getchar();
	printf_sum(a,&b);
	printf("问题三：最近是否心里觉得苦闷，难以消除\na:最近一周内出现这种情况的日子不超过一天 (0分)\nb:最近一周内曾有1-2天出现这种情况 (1分)\nc:最近一周内曾有3-4天出现这种情况 (2分)\nd:最近一周内曾有5-7天出现这种情况 (3分)\n");
		scanf("%c",&a);
	getchar();
	printf_sum(a,&b);
	printf("问题四：最近是否会觉得做事时无法集中精力\na:最近一周内出现这种情况的日子不超过一天 (0分)\nb:最近一周内曾有1-2天出现这种情况 (1分)\nc:最近一周内曾有3-4天出现这种情况 (2分)\nd:最近一周内曾有5-7天出现这种情况 (3分)\n");
		scanf("%c",&a);
	getchar();
	printf_sum(a,&b);
	printf("问题五：最近是否会觉得情绪低沉\na:最近一周内出现这种情况的日子不超过一天 (0分)\nb:最近一周内曾有1-2天出现这种情况 (1分)\nc:最近一周内曾有3-4天出现这种情况 (2分)\nd:最近一周内曾有5-7天出现这种情况 (3分)\n");
		scanf("%c",&a);
	getchar();
	printf_sum(a,&b);
	printf("您的心理测试分数为：%d分\n",b);
	if(b>=0&&b<6)
		printf("根据您的心理测试情况来看：你有轻度的情绪困扰，可尝试进行自我心理调整来解决困扰，不会对你的心理健康产生影响。\n");
	else if(b>5&&b<16)
		printf("根据您的心理测试情况来看：你有较严重的心理困惑与烦恼，通过自身的心理调整已经有些困难了，这时应考虑到专业的心理咨询机构进行心理咨询。\n") ;
}


int printf_sum(char a,int *b)
{	
	switch(a)
	{	
		
		case 'a':
			*b+=0;
			break;
		case 'b':
		 	*b+=1;
		 	break;
		case 'c':
			*b+=2;
			break;
		case 'd':
			*b+=3; 
			break;
	}
}

void printf_look()//查看心理老师简历信息 
{
	int b;
	printf("-------查看心理老师信息--------\n");
	scanf("%d",&b);
	switch(b) 
	{
		case 1:
			printf("粉色娇艳 你如今几岁了？\n");
			break;
			
		case 2:
			printf("翠果 打烂她的嘴\n");
			break;
			
		case 3:
			printf("赏一丈红\n");
			break;
	}
}
void printf_feedback()//收集学生反馈和建议
{
	char k,j;
	printf("------收集心理咨询意见及反馈------\n");
	printf("心理咨询结束后你的感受如何?\n");
		scanf("%c",&k);
	getchar();
	
	printf("心理老师的疏导过程有无需要改进的地方？\n");
		scanf("%c",&j);
	getchar();
	
	printf("感谢您的意见和反馈，祝您身体健康、生活愉快！\n");
	
 } 

void printf_appoint()//学生预约菜单
{
	int select=0;

	printf("心理咨询室开放时间为周一至周五！\n"); 
	printf("----------------------------\n");
	printf("请选择预约时间:\n");
	printf("1、周一\n");
	printf("2、周二\n");
	printf("3、周三\n");
	printf("4、周四\n");
	printf("5、周五\n");
	printf("----------------------------\n");
	printf("请输入相应的序号选择!       \n");
	scanf("%d",&select);
	trans(select);
	
 } 
void trans(int n)
{
	struct class_room WLW;//定义一个班级为WLW存储学生 
	WLW.n=0;
	switch (n)
	{
	case 1:
		mon(&WLW);
		break;
	case 2:
		tue(&WLW);
		break;
	case 3:
		wed(&WLW);
		break;
	case 4:
		thur(&WLW);
		break;
	case 5:
		fri(&WLW);
		break;
		exit(0);
			
	}
}

void mon(struct class_room *WLW)
{	
//	int time[10],n=0;
	printf("请输入预约时间：\n");
	scanf("%d",&WLW->MIN[WLW->n].time);	//数组名代表首地址 
	printf("请输入预约老师：\n");
	scanf("%s",&WLW->MIN[WLW->n].teacher);	//取变量的地址 
	printf("请输入地点：\n");
	scanf("%s",&WLW->MIN[WLW->n].location);
	printf("预约时间： %d\n",WLW->MIN[WLW->n].time);//第一个学生
	printf("预约老师： %s\n",WLW->MIN[WLW->n].teacher);
	printf("预约地点： %s\n",WLW->MIN[WLW->n].location);
}
void tue(struct class_room *WLW)
{	
	printf("请输入预约时间：\n");
	scanf("%d",&WLW->MIN[WLW->n].time);	//数组名代表首地址 
	printf("请输入预约老师：\n");
	scanf("%s",&WLW->MIN[WLW->n].teacher);	//取变量的地址 
	printf("请输入地点：\n");
	scanf("%s",&WLW->MIN[WLW->n].location);
	printf("预约时间： %d\n",WLW->MIN[WLW->n].time);//第一个学生
	printf("预约老师： %s\n",WLW->MIN[WLW->n].teacher);
	printf("预约地点： %s\n",WLW->MIN[WLW->n].location);
	
}
void wed(struct class_room *WLW)
{
	printf("请输入预约时间：\n");
	scanf("%d",&WLW->MIN[WLW->n].time);	//数组名代表首地址 
	printf("请输入预约老师：\n");
	scanf("%s",&WLW->MIN[WLW->n].teacher);	//取变量的地址 
	printf("请输入地点：\n");
	scanf("%s",&WLW->MIN[WLW->n].location);
	printf("预约时间： %d\n",WLW->MIN[WLW->n].time);//第一个学生
	printf("预约老师： %s\n",WLW->MIN[WLW->n].teacher);
	printf("预约地点： %s\n",WLW->MIN[WLW->n].location);
}
void thur(struct class_room *WLW)
{
	printf("请输入预约时间：\n");
	scanf("%d",&WLW->MIN[WLW->n].time);	//数组名代表首地址 
	printf("请输入预约老师：\n");
	scanf("%s",&WLW->MIN[WLW->n].teacher);	//取变量的地址 
	printf("请输入地点：\n");
	scanf("%s",&WLW->MIN[WLW->n].location);
	printf("预约时间： %d\n",WLW->MIN[WLW->n].time);//第一个学生
	printf("预约老师： %s\n",WLW->MIN[WLW->n].teacher);
	printf("预约地点： %s\n",WLW->MIN[WLW->n].location);
}
void fri(struct class_room *WLW)
{
	printf("请输入预约时间：\n");
	scanf("%d",&WLW->MIN[WLW->n].time);	//数组名代表首地址 
	printf("请输入预约老师：\n");
	scanf("%s",&WLW->MIN[WLW->n].teacher);	//取变量的地址 
	printf("请输入地点：\n");
	scanf("%s",&WLW->MIN[WLW->n].location);
	printf("预约时间： %d\n",WLW->MIN[WLW->n].time);//第一个学生
	printf("预约老师： %s\n",WLW->MIN[WLW->n].teacher);
	printf("预约地点： %s\n",WLW->MIN[WLW->n].location);
}

void printf_menu()//打印主菜单函数 
{
	printf("        学生心理咨询系统        \n");
	printf("----------------------------\n");
	printf("|1、添加学生信息            |\n");
	printf("|2、显示所有学生信息        |\n");
	printf("|3、查询学生信息            |\n");
	printf("|4、删除学生信息            |\n");
	printf("|5、修改学生信息            |\n");
	printf("|6、退出                    |\n");
	printf("----------------------------\n");
	printf("请输入相应的序号选择!       \n");
}

void add_student(struct class_room *WLW)//添加学生信息，其中struct class_room *WLW为结构体指针 
{
	printf("请输入学生的姓名：\n");
	scanf("%s",WLW->st[WLW->n].name);	//数组名代表首地址 
	printf("请输入学生的年龄：\n");
	scanf("%d",&WLW->st[WLW->n].age);	//取变量的地址 
	printf("请输入学生的id：\n");
	scanf("%d",&WLW->st[WLW->n].id);
	printf("请输入学生的性别：\n");
	scanf("%s",WLW->st[WLW->n].sex);
	printf_evaluate();	
		printf_look();
		printf_appoint();
		printf_feedback();
	WLW->n++;//班级人数加一
}

void show_student(struct class_room *WLW)//显示所有学生信息 
{
	int i;
	for(i=0;i<WLW->n;i++)//WLW->n为当前班级的人数
	{
		printf("the %d student name is %s\n",i+1,WLW->st[i].name);//第一个学生
		printf("the %d student age is %d\n",i+1,WLW->st[i].age);
		printf("the %d student id is %d\n",i+1,WLW->st[i].id);
		printf("the %d student sex is %s\n",i+1,WLW->st[i].sex);
	}
}

int find_student(struct class_room *WLW)//查找指定学生 
{
	int id,i; 
	printf("请输入要查找的学生id：\n");
	scanf("%d",&id);
	
	for(i=0;i<WLW->n;i++)
	{
		if(id==WLW->st[i].id)
		{
			printf("the student is exist!\n");
			printf("the %d student name is %s\n",i+1,WLW->st[i].name);
			printf("the %d student age is %d\n",i+1,WLW->st[i].age);
			printf("the %d student id is %d\n",i+1,WLW->st[i].id);
			printf("the %d student sex is %s\n",i+1,WLW->st[i].sex);
			return i;
		}
	}
	printf("the student is not exist!\n");
	return -1;
}

void remove_student(struct class_room *WLW)//删除指定学生 
{
	int ret,i;
	ret=find_student(WLW);
	
	if(ret!=-1)
	{
		for(i=ret;i<WLW->n-1;i++)
		{
			strcpy(WLW->st[i].name,WLW->st[i+1].name);//由于是字符串类型复制使用头文件string.h中的strcpy复制函数 
			WLW->st[i].age=WLW->st[i+1].age;
			WLW->st[i].id=WLW->st[i+1].id;
			strcpy(WLW->st[i].sex,WLW->st[i+1].sex);
		}
		
		WLW->n--;
	}
	printf("该学生已经删除成功！\n");
}

void change_student(struct class_room *WLW)//修改学生信息 
{
	int ret,choose;
	ret=find_student(WLW);
	if(ret!=-1)
	{
		loop1:
			printf("修改学生信息的哪一项？\n");
			printf("1、姓名\n");
			printf("2、年龄\n");
			printf("3、id\n");
			printf("4、性别\n");
			scanf("%d",&choose);
			
			switch(choose)
			{
				case 1:
					printf("请输入新的学生姓名：\n");
					scanf("%s",WLW->st[ret].name);//输出的代表首地址，所以不需要&取地址 
					break;
				case 2:
					printf("请输入新的学生年龄：\n");
					scanf("%d",&WLW->st[ret].age);
					break;
				case 3:
					printf("请输入新的学生id：\n");
					scanf("%d",&WLW->st[ret].id);
					break;
				case 4: 
					printf("请输入新的学生性别：\n");
					scanf("%s",WLW->st[ret].sex);
					break;
				default:
					printf("输出错误，请重新输入！\n");
					goto loop1;
			}
			
	}
}
