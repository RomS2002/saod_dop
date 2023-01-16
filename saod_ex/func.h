#pragma once

#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

extern bool isRunning;

struct Point
{
	double x;
	double y;
};

struct Triangle
{
	Point A;
	Point B;
	Point C;
};

//Рекурсивный DFS для задания на связность 1 - одна компонента, 0 - разные компонетны 
int dfsForTask4(int** graph_matrix, int size, bool* checked, int cur_v, int dest_v);

//Задача на связность
void connectivityTask();

//Поиск количества путей в графе
void findPathCount();

//Рекурсивная функция поиска количества путей.
int findPathRec(int** matrix, int size, int cur, int to, int cur_len, int max_len);

//Задача про отрезки
void segmentsTask();

//Вывод: 1 - отрезки пересекаются; 0 - отрезки не пересекаются
int isIntersected(Point A1, Point A2, Point B1, Point B2);

//Задача про треугольник и точку
void triangleAndPoint();

//Вывод: 1 - точка лежит внутри треугольника, 0 - на границе треугольника, -1 - вне треугольника
int triangleAndPointFunc(Triangle trgl, Point P);

//Векторное (косое) произведение векторов
double vect(double x1, double y1, double x2, double y2);