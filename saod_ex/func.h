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