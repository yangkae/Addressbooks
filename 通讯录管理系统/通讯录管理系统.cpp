
// ��װ�������棬�� void showMenu()
// ��main�����е��÷�װ�õĺ���
#include <iostream>
#include <string>
using namespace std;
# define MAX 1000

// �����ϵ�˽ṹ��
struct Person
{
	string m_Name;                  //����
	int m_Sex;						//�Ա�  1-�У�2-Ů
	int m_Age;						//����
	string m_Phone;					//�绰
	string m_Addr;					//סַ
};

// ���ͨѶ¼�ṹ��
struct Addressbooks
{
	struct Person personArray[MAX]; //ͨѶ¼�б������ϵ������
	int m_Size;						//ͨѶ¼�е�ǰ��¼��ϵ�˸���
};


// �˵�����
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{

	Addressbooks abs;	// ����ͨѶ¼�ṹ�����
	abs.m_Size = 0;		// ��ʼ��ͨѶ¼�е�ǰ��Ա����

	int select = 0;

	while (true) {
		// �˵�����
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:		// �����ϵ��
			addPerson(&abs);		//���õ�ַ���ݣ���������ʵ��
			break;
		case 2:		// ��ʾ��ϵ��
			break;
		case 3:		// ɾ����ϵ��
			break;
		case 4:		// ������ϵ��
			break;
		case 5:		// �޸���ϵ��
			break;
		case 6:		// �����ϵ��
			break;
		case 0:		// �˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
			break;
		default:
			break;
		}
	}
	

	system("pause");
	return 0;

}