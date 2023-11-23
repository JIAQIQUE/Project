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
	struct student st[MAX];	//������ѧ�� 
	struct information MIN[10];
	int n;	//��ǰ�༶������
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
void printf_sum(char a,int *total);//���������������
void printf_evaluate();//������������ 
void printf_look();//�鿴��ʦ��Ϣ 
void printf_feedback();//�ռ���������� 
#endif
