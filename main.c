#include <stdio.h>
#include <stdlib.h>
#include"Student.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#define MAX 60
int main(int argc, char *argv[]) {
	struct class_room WLW;//����һ���༶ΪWLW�洢ѧ�� 
	WLW.n=0;//��ʼ����ѧ������Ϊ0 
	
	while(1)//����ѭ�� 
	{
		loop:
			printf_menu();//�������˵�����������˵�
			int choose;//����һ�����
			scanf("%d",&choose);
	
		switch(choose)
		{
			case 1:
				add_student(&WLW);//���ѧ��
				break;
			case 2:
				show_student(&WLW);//��ʾѧ��
				break;
			case 3:
				find_student(&WLW);//��ѯѧ��
				break;
			case 4:
				remove_student(&WLW);//ɾ��ѧ��
				break; 
			case 5:
				change_student(&WLW);//�޸�ѧ��
				break;
			case 6:
				return 0;//�˳�����
			default://������������ţ�����ת���������
				printf("����������������룡\n");
				goto loop;	
		}
	
	}
	return 0;
}
