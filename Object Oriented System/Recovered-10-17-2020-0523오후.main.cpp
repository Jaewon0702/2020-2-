/*
#include <stdio.h>
int main(){
	// ��������
	char name[10]; //�̸�
	char gender ; //����(M, F)
	int eng, math, com; //����, ����, ��ǻ��
	double avg, GPA ; // ���, ����

	//�ڷ��Է�
	printf("�̸�?");
	//scanf("%s", name);
	//fflush(stdin);
	gets(name);
	printf("����(���� M, ���� F)?");
	gender = getchar();
    printf("���� ���� ��ǻ�� ����?");
	scanf("%d %d %d", &eng, &math, &com);
    
	//�ڷ�ó��
	avg= (eng + math + com)/3.0;
	GPA = (avg * 4.5)/100;

	//������
	printf("================\n");
	printf("�̸� ����: %s %c", name, gender );
	printf("------------------\n");
	printf("%-6s : %3d�� \n", "����", eng);
	printf("%-6s : %3d�� \n", "����", math);
	printf("%-6s : %3d�� \n", "��ǻ��", com);
	printf("------------------\n");
	printf("���(����): %.2lf�� (%.2lf)\n", avg, GPA);
	printf("================\n");




	return 0;
} 
*/
// C++
#include <iostream>
using namespace std;
int main(){
	// ��������
	char name[10]; //�̸�
	char gender ; //����(M, F)
	int eng, math, com; //����, ����, ��ǻ��
	double avg, GPA ; // ���, ����

	//�ڷ��Է�
	cout <<"�̸�?";
	//cin>>name;
	cin.getline(name, 10)
	cout<<"����(���� M, ���� F)?";
	cin >> gender;

    cout<< "���� ���� ��ǻ�� ����?";
	cin >> eng >> math >> com;

    
	//�ڷ�ó��
	avg= (eng + math + com)/3.0;
	GPA = (avg * 4.5)/100;

	//������
	cout << "================\n";
	cout <<"�̸� (����):" << name << "(" << gender << ")\n";
    cout <<"------------------\n";
	cout << "���� :" << "eng" << "\n";
	cout << "���� :" << "" << "\n";
	cout << "���� :" << "eng" << "\n";


	printf("------------------\n");
	printf("���(����): %.2lf�� (%.2lf)\n", avg, GPA);
	printf("================\n");




	return 0;
}