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
		cout << "Выберите действие:\n1) Поиск количества путей в графе;\n2) Определение пересечения отрезков;\n3) Выход;\n\n> ";
		cin >> choise;

		system("cls");

		switch (choise)
		{
		case 1:		
			findPathCount();
			break;
		case 2:
			
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