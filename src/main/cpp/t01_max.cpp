//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//        Программа получает на вход размеры массива n и m, 
// затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//        Выведите два числа: номер строки и номер столбца, 
// в которых стоит наибольший элемент в двумерном массиве. 
// Если таких элементов несколько, то выводится тот, у которого меньше номер строки, 
// а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2

#include "t01_max.h"
#include <iostream>


using namespace std;

int t01_max() {
    int n;
    int m;
    int max;
    cin >> n >> m;
    int arr[n][m];
    int s1 = 0;
    int s2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            if ((i == 0) and (j == 0))
                max = arr[i][j];
            if (arr[i][j] > max)
            {
                max = arr[i][j];
                s1 = i;
                s2 = j;
            }

        }
    }
    cout << s1 << ' ' << s2;
    return 0;
}