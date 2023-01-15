#include "func.h"

void findPathCount()
{
	ifstream file("data.txt");
	if (!file.is_open())
	{
		cout << "Ошибка открытия файла!\n";
		system("pause");
		return;
	}
	int size;
	file >> size;

	int** graph_matrix = new int* [size];
	for (int i = 0; i < size; i++)
	{
		graph_matrix[i] = new int[size];
		for (int j = 0; j < size; j++)
			file >> graph_matrix[i][j];
	}

	int v_i, v_j, k;
	cout << "Введите начальную вершину:\n> ";
	cin >> v_i;
	cout << "Введите конечную вершину:\n> ";
	cin >> v_j;
	cout << "Введите максимальную длину пути:\n> ";
	cin >> k;
	
	int len = 0;
	int count = findPathRec(graph_matrix, size, v_i, v_j, len, k);

	cout << "Число путей из " << v_i << " в " << v_j << ", длиной, не превосходящих " << k << ": " << count << "\n";
	system("pause");

	file.close();
	for (int i = 0; i < size; i++)
		delete[] graph_matrix[i];
	delete[] graph_matrix;
}

int findPathRec(int** matrix, int size, int cur, int to, int cur_len, int max_len)
{
	int pathCount = 0;
	for (int i = 0; i < size; i++)
		if (matrix[cur][i] > 0 && (cur_len + matrix[cur][i]) <= max_len)
		{
			if (i == to)
				pathCount++;
			else
				pathCount += findPathRec(matrix, size, i, to, cur_len + matrix[cur][i], max_len);
		}
	return pathCount;
}

void segmentsTask()
{
	double x1, y1, x2, y2;
	cout << "Введите координаты первого отрезка:\n> ";
	cin >> x1 >> y1;
	cout << "Введите координаты второго отрезка:\n> ";
	cin >> x2 >> y2;
	int result = isIntersected(x1, y1, x2, y2);
	if (result == 1)
		cout << "Отрезки пересекаются!\n";
	else
		cout << "Отрезки не пересекаются!\n";
	system("pause");
}

int isIntersected(double x1, double y1, double x2, double y2)
{
	return 0;
}

void triangleAndPoint()
{
	Triangle trgl{};
	Point P{};
	cout << "Введите координаты точки A треугольника:\n> ";
	cin >> trgl.A.x >> trgl.A.y;
	cout << "Введите координаты точки B треугольника:\n> ";
	cin >> trgl.B.x >> trgl.B.y;
	cout << "Введите координаты точки C треугольника:\n> ";
	cin >> trgl.C.x >> trgl.C.y;
	cout << "Введите координаты точки P:\n> ";
	cin >> P.x >> P.y;

	int result = triangleAndPointFunc(trgl, P);
	switch (result) {
	case 1:
		cout << "Точка лежит внутри треугольника\n";
		break;
	case 0:
		cout << "Точка лежит на границе треугольника\n";
		break;
	case -1:
		cout << "Точка лежит вне треугольника\n";
		break;
	}
	system("pause");
}

double vect(double x1, double y1, double x2, double y2)
{
	return x1 * y2 - x2 * y1;
}

int triangleAndPointFunc(Triangle trgl, Point P)
{
	double p = vect(trgl.A.x - P.x, trgl.A.y - P.y, trgl.B.x - trgl.A.x, trgl.B.y - trgl.A.y);
	double q = vect(trgl.B.x - P.x, trgl.B.y - P.y, trgl.C.x - trgl.B.x, trgl.C.y - trgl.B.y);
	double r = vect(trgl.C.x - P.x, trgl.C.y - P.y, trgl.A.x - trgl.C.x, trgl.A.y - trgl.C.y);
	if (p == 0 || q == 0 || r == 0) {
		return 0;
	}
	else if ((p > 0 && q > 0 && r > 0) || (p < 0 && q < 0 && r < 0)) {
		return 1;
	}
	else {
		return -1;
	}
}
