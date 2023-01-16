#include "func.h"

int main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	bool isRunning = true;
	int choise;

	while (isRunning)
	{
		cout << "Дополнительные задачи САОД\n========================================\n";
		cout << "Выберите действие:\n1) Поиск количества путей в графе;\n2) Определение пересечения отрезков;\n3) Треугольник и точка;\n4) Задача на связность;\n5) Выход;\n\n> ";
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
			triangleAndPoint();
			break;
		case 4:
			connectivityTask();
			break;
		case 5:
			isRunning = false;
			break;
		default:
			break;
		}

		system("cls");
	}
	return 0;
}