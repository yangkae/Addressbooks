
// 封装函数界面，如 void showMenu()
// 在main函数中调用封装好的函数
#include <iostream>
#include <string>
using namespace std;
# define MAX 1000

// 设计联系人结构体
struct Person
{
	string m_Name;                  //姓名
	int m_Sex;						//性别  1-男，2-女
	int m_Age;						//年龄
	string m_Phone;					//电话
	string m_Addr;					//住址
};

// 设计通讯录结构体
struct Addressbooks
{
	struct Person personArray[MAX]; //通讯录中保存的联系人数组
	int m_Size;						//通讯录中当前记录联系人个数
};


// 菜单界面
void showMenu()
{
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}

int main()
{

	Addressbooks abs;	// 创建通讯录结构体变量
	abs.m_Size = 0;		// 初始化通讯录中当前人员个数

	int select = 0;

	while (true) {
		// 菜单调用
		showMenu();

		cin >> select;

		switch (select)
		{
		case 1:		// 添加联系人
			addPerson(&abs);		//利用地址传递，可以修饰实参
			break;
		case 2:		// 显示联系人
			break;
		case 3:		// 删除联系人
			break;
		case 4:		// 查找联系人
			break;
		case 5:		// 修改联系人
			break;
		case 6:		// 清空联系人
			break;
		case 0:		// 退出通讯录
			cout << "欢迎下次使用" << endl;
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