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
		cout << "�������� ��������:\n1) ����� ���������� ����� � �����;\n2) ����������� ����������� ��������;\n3) �����;\n\n> ";
		cin >> choise;

		system("cls");

		switch (choise)
		{
		case 1:		
			findPathCount();
			break;
		case 2:
			segmentsTask();
		case 3:
			isRunning = false;
			break;
		default:
			break;
		}

		system("cls");
	}
	return 0;
}