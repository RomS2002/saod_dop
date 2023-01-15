#pragma once

#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

extern bool isRunning;

//����� ���������� ����� � �����
void findPathCount();

//����������� ������� ������ ���������� �����.
int findPathRec(int** matrix, int size, int cur, int to, int cur_len, int max_len);

//������ ��� �������
void segmentsTask();

//�����: 1 - ������� ������������; 0 - ������� �� ������������
int isIntersected(double x1, double y1, double x2, double y2);