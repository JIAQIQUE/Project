#include<stdio.h>
#include<string.h>//����ͷ�ļ�string.h
#include <stdlib.h>
#define MAX 60//����MAX���ֵΪ60 
#include "Student.h"

void printf_evaluate()
{	char a;
	int *total=0;
	printf("����������ʼ��\n");
	printf("----------------------------\n");
	printf("����һ��\n");
	scanf("%c",&a);
	getchar();
	printf_sum(a,&total);
	printf("�������\n");
	scanf("%c",&a);
	getchar();
	printf_sum(a,&total);
	printf("��������\n");
		scanf("%c",&a);
	getchar();
	printf_sum(a,&total);
	printf("�����ģ�\n");
		scanf("%c",&a);
	getchar();
	printf_sum(a,&total);
	printf("�����壺\n");
		scanf("%c",&a);
	getchar();
	printf_sum(a,&total);
	printf("%d",total);
}
void printf_sum(char a,int *total)
{	
	switch(a)
	{
		case 'a':
			*total+=4;
			break;
		case 'b':
		 	*total+=3;
		 	break;
		case 'c':
			*total+=2;
			break;
		case 'd':
			*total+=1; 
			break;
	}
//	printf("%d\n",sum);
}

void printf_look()//�鿴������ʦ������Ϣ 
{
	int b;
	printf("-------�鿴������ʦ��Ϣ--------\n");
	scanf("%d",&b);
	switch(b) 
	{
		case 1:
			printf("��ɫ���� ��������ˣ�\n");
			break;
			
		case 2:
			printf("��� ����������\n");
			break;
			
		case 3:
			printf("��һ�ɺ�\n");
			break;
	}
}
void printf_feedback()//�ռ�ѧ�������ͽ���
{
	char k,j;
	printf("------�ռ�������ѯ���������------\n");
	printf("������ѯ��������ĸ������?\n");
		scanf("%c",&k);
	getchar();
	
	printf("������ʦ���赼����������Ҫ�Ľ��ĵط���\n");
		scanf("%c",&j);
	getchar();
	
	printf("��л��������ͷ�����ף�����彡����������죡\n");
	
 } 

void printf_appoint()//ѧ��ԤԼ�˵�
{
	int select=0;

	printf("������ѯ�ҿ���ʱ��Ϊ��һ�����壡\n"); 
	printf("----------------------------\n");
	printf("��ѡ��ԤԼʱ��:\n");
	printf("1����һ\n");
	printf("2���ܶ�\n");
	printf("3������\n");
	printf("4������\n");
	printf("5������\n");
	printf("----------------------------\n");
	printf("��������Ӧ�����ѡ��!       \n");
	scanf("%d",&select);
	trans(select);
	
 } 
void trans(int n)
{
	struct class_room WLW;//����һ���༶ΪWLW�洢ѧ�� 
	WLW.n=0;
	switch (n)
	{
	case 1:
		mon(&WLW);
		break;
	case 2:
		tue();
		break;
	case 3:
		wed();
		break;
	case 4:
		thur();
		break;
	case 5:
		fri();
		break;
		exit(0);
			
	}
}

void mon(struct class_room *WLW)
{	
//	int time[10],n=0;
	printf("������ԤԼʱ�䣺\n");
	scanf("%d",&WLW->MIN[WLW->n].time);	//�����������׵�ַ 
	printf("������ԤԼ��ʦ��\n");
	scanf("%s",&WLW->MIN[WLW->n].teacher);	//ȡ�����ĵ�ַ 
	printf("������ص㣺\n");
	scanf("%s",&WLW->MIN[WLW->n].location);
	printf("ԤԼʱ�䣺 %d\n",WLW->MIN[WLW->n].time);//��һ��ѧ��
	printf("ԤԼ��ʦ�� %s\n",WLW->MIN[WLW->n].teacher);
	printf("ԤԼ�ص㣺 %s\n",WLW->MIN[WLW->n].location);
}
void tue()
{
	
}
void wed()
{
	
}
void thur()
{
	
}
void fri()
{
	
}

void printf_menu()//��ӡ���˵����� 
{
	printf("        ѧ��������ѯϵͳ        \n");
	printf("----------------------------\n");
	printf("|1�����ѧ����Ϣ            |\n");
	printf("|2����ʾ����ѧ����Ϣ        |\n");
	printf("|3����ѯѧ����Ϣ            |\n");
	printf("|4��ɾ��ѧ����Ϣ            |\n");
	printf("|5���޸�ѧ����Ϣ            |\n");
	printf("|6���˳�                    |\n");
	printf("----------------------------\n");
	printf("��������Ӧ�����ѡ��!       \n");
}

void add_student(struct class_room *WLW)//���ѧ����Ϣ������struct class_room *WLWΪ�ṹ��ָ�� 
{
	printf("������ѧ����������\n");
	scanf("%s",WLW->st[WLW->n].name);	//�����������׵�ַ 
	printf("������ѧ�������䣺\n");
	scanf("%d",&WLW->st[WLW->n].age);	//ȡ�����ĵ�ַ 
	printf("������ѧ����id��\n");
	scanf("%d",&WLW->st[WLW->n].id);
	printf("������ѧ�����Ա�\n");
	scanf("%s",WLW->st[WLW->n].sex);
	
	WLW->n++;//�༶������һ
}

void show_student(struct class_room *WLW)//��ʾ����ѧ����Ϣ 
{
	int i;
	for(i=0;i<WLW->n;i++)//WLW->nΪ��ǰ�༶������
	{
		printf("the %d student name is %s\n",i+1,WLW->st[i].name);//��һ��ѧ��
		printf("the %d student age is %d\n",i+1,WLW->st[i].age);
		printf("the %d student id is %d\n",i+1,WLW->st[i].id);
		printf("the %d student sex is %s\n",i+1,WLW->st[i].sex);
	}
}

int find_student(struct class_room *WLW)//����ָ��ѧ�� 
{
	int id,i; 
	printf("������Ҫ���ҵ�ѧ��id��\n");
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

void remove_student(struct class_room *WLW)//ɾ��ָ��ѧ�� 
{
	int ret,i;
	ret=find_student(WLW);
	
	if(ret!=-1)
	{
		for(i=ret;i<WLW->n-1;i++)
		{
			strcpy(WLW->st[i].name,WLW->st[i+1].name);//�������ַ������͸���ʹ��ͷ�ļ�string.h�е�strcpy���ƺ��� 
			WLW->st[i].age=WLW->st[i+1].age;
			WLW->st[i].id=WLW->st[i+1].id;
			strcpy(WLW->st[i].sex,WLW->st[i+1].sex);
		}
		
		WLW->n--;
	}
	printf("��ѧ���Ѿ�ɾ���ɹ���\n");
}

void change_student(struct class_room *WLW)//�޸�ѧ����Ϣ 
{
	int ret,choose;
	ret=find_student(WLW);
	if(ret!=-1)
	{
		loop1:
			printf("�޸�ѧ����Ϣ����һ�\n");
			printf("1������\n");
			printf("2������\n");
			printf("3��id\n");
			printf("4���Ա�\n");
			scanf("%d",&choose);
			
			switch(choose)
			{
				case 1:
					printf("�������µ�ѧ��������\n");
					scanf("%s",WLW->st[ret].name);//����Ĵ����׵�ַ�����Բ���Ҫ&ȡ��ַ 
					break;
				case 2:
					printf("�������µ�ѧ�����䣺\n");
					scanf("%d",&WLW->st[ret].age);
					break;
				case 3:
					printf("�������µ�ѧ��id��\n");
					scanf("%d",&WLW->st[ret].id);
					break;
				case 4: 
					printf("�������µ�ѧ���Ա�\n");
					scanf("%s",WLW->st[ret].sex);
					break;
				default:
					printf("����������������룡\n");
					goto loop1;
			}
			
	}
}
