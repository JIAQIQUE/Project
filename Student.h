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

struct class_room{
	struct student st[MAX];	//定义多个学生 
	int n;	//当前班级的人数
};
typedef struct class_room WLW;


void printf_menu();
void add_student(struct class_room *WLW);
void show_student(struct class_room *WLW);
int find_student(struct class_room *WLW);
void remove_student(struct class_room *WLW);
void change_student(struct class_room *WLW);

#endif
