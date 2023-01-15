#pragma once

#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

extern bool isRunning;

//Поиск количества путей в графе
void findPathCount();

//Рекурсивная функция поиска количества путей.
int findPathRec(int** matrix, int size, int cur, int to, int cur_len, int max_len);

//Задача про отрезки
void segmentsTask();

//Вывод: 1 - отрезки пересекаются; 0 - отрезки не пересекаются
int isIntersected(double x1, double y1, double x2, double y2);