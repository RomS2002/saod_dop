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