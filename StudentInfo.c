#include<stdio.h>
#include<string.h>//����ͷ�ļ�string.h
#include <stdlib.h>
#define MAX 60//����MAX���ֵΪ60 
#include "Student.h"


void printf_menu()//��ӡ���˵����� 
{
	printf("        ѧ������ϵͳ        \n");
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
