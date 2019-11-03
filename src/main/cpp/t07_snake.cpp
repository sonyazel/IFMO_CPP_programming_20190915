//По данным числам n и m заполните двумерный массив размером n×m числами от 1 до n×m “змейкой”,
// как показано в примере.
//
//Формат входных данных
//        Вводятся два числа n и m, каждое из которых не превышает 30.
//Формат выходных данных
//        Выведите полученный массив, отводя на вывод каждого элемента ровно 4 символа.
//
//Sample Input:
//
//3 5
//Sample Output:
//
//   1   2   3   4   5
//  10   9   8   7   6
//  11  12  13  14  15

#include "t07_snake.h"
#include <iostream>
#include <iomanip>

using namespace std;

int t07_snake() {
    int n;
    int m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i + 1) % 2 == 0)
                arr[i][j] = (i + 1) * (m) - j;
            else
                arr[i][j] = (i) * (m) + j + 1;
            cout << setw(4) << arr[i][j] << fixed ;
        }
        //cout << endl;
    }
    return 0;
}