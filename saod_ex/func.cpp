#include "func.h"

void findPathCount()
{
	ifstream file("data.txt");
	if (!file.is_open())
	{
		cout << "������ �������� �����!\n";
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
	cout << "������� ��������� �������:\n> ";
	cin >> v_i;
	cout << "������� �������� �������:\n> ";
	cin >> v_j;
	cout << "������� ������������ ����� ����:\n> ";
	cin >> k;
	
	int len = 0;
	int count = findPathRec(graph_matrix, size, v_i, v_j, len, k);

	cout << "����� ����� �� " << v_i << " � " << v_j << ", ������, �� ������������� " << k << ": " << count << "\n";
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
