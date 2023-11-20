#include <stdio.h>
#include <stdlib.h>
#include"Student.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 60
int main(int argc, char *argv[]) {
	struct class_room WLW;//定义一个班级为WLW存储学生 
	WLW.n=0;//初始化，学生人数为0 
	
	while(1)//无限循环 
	{
		loop:
			printf_menu();//调用主菜单函数输出主菜单
			int choose;//定义一个序号
			scanf("%d",&choose);
	
		switch(choose)
		{
			case 1:
				add_student(&WLW);//添加学生
				break;
			case 2:
				show_student(&WLW);//显示学生
				break;
			case 3:
				find_student(&WLW);//查询学生
				break;
			case 4:
				remove_student(&WLW);//删除学生
				break; 
			case 5:
				change_student(&WLW);//修改学生
				break;
			case 6:
				return 0;//退出程序
			default://若输出错误的序号，则跳转至重新输出
				printf("输出错误，请重新输入！\n");
				goto loop;	
		}
	
	}
	return 0;
}
