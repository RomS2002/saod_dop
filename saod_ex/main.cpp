#include "func.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	bool isRunning = true;
	int choise;

	while (isRunning)
	{
		cout << "Дополнительные задачи САОД\n========================================\n";
		cout << "Выберите действие:\n1) Поиск количества путей в графе;\n2) Выход;\n\n> ";
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