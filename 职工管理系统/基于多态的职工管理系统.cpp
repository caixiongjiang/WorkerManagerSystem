#include<iostream>
#include "workerManager.h"
using namespace std;

//#include "Worker.h"
//#include "employee.h"
//#include "manager.h"
//#include "boss.h"

int main()
{
	//���Դ���
	//Worker* worker = NULL;
	//worker = new Employee(1, "����", 1);
	//worker->showInfo();
	//delete worker;
	
	//worker = new Manager(2, "����", 2);
	//worker->showInfo();
	//delete worker;

	//worker = new Boss(3, "����", 3);
	//worker->showInfo();
	//delete worker;
	
	
	//ʵ���������߶���
	WorkerManager wm;
	
	int choice = 0;//�����洢�û���ѡ��

	while (true)
	{
		//����չʾ�˵���Ա����
		wm.Show_Menu();

		cout << "����������ѡ��" << endl;
		cin >> choice;//�����û���ѡ��

		switch (choice)
		{
		case 0:	//�˳�ϵͳ
			wm.ExitSystem();
			break;
		case 1:	//����ְ��
			wm.Add_Emp();
			break;
		case 2:	//��ʾְ��
			wm.show_Emp();
			break;
		case 3:	//ɾ��ְ��
			wm.Del_Emp();
			break;
		case 4:	//�޸�ְ��
			wm.Mod_Emp();
			break;
		case 5:	//����ְ��
			wm.Find_Emp();
			break;
		case 6:	//ְ������
			wm.Sort_Emp();
			break;
		case 7:	//����ĵ�
			wm.Clean_File();
			break;
		default:
			system("cls");	//��������
			break;
		}
	}
	
	//����չʾ�˵���Ա����
	wm.Show_Menu();

	system("pause");
	
	return 0;
}