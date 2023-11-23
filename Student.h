#include <stdlib.h>
#ifndef __STUDENT_H__
#define __STUDENT_H__
#define MAX 60


struct student{
	char name[20];
	int age;
	int id;
	char sex[10];
};

struct information{
	char teacher[10];
	int time;
	char location[10];
};

struct class_room{
	struct student st[MAX];	//定义多个学生 
	struct information MIN[10];
	int n;	//当前班级的人数
};
typedef struct class_room WLW;
void trans(int n);
void mon(struct class_room *WLW);
void tue();
void wed();
void thur();
void fri();
void printf_menu();
void printf_appoint();
void add_student(struct class_room *WLW);
void show_student(struct class_room *WLW);
int find_student(struct class_room *WLW);
void remove_student(struct class_room *WLW);
void change_student(struct class_room *WLW);
void printf_sum(char a,int *total);//自我评估问题求和
void printf_evaluate();//自我评估输入 
void printf_look();//查看老师信息 
void printf_feedback();//收集反馈和意见 
#endif
