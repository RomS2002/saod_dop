#include "func.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool isRunning = true;
	int choise;

	while (isRunning)
	{
		cout << "�������������� ������ ����\n========================================\n";
		cout << "�������� ��������:\n1) ����� ���������� ����� � �����;\n2) �����;\n\n> ";
		cin >> choise;
		switch (choise)
		{
		case 1:
			system("cls");
			findPathCount();
			system("cls");
			break;
		case 2:
			isRunning = false;
			break;
		default:
			break;
		}
	}
	return 0;
}