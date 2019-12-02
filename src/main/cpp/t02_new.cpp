//Во входной строке записана последовательность чисел через пробел. 
// Для каждого числа выведите слово YES (в отдельной строке), 
// если это число ранее встречалось в последовательности или NO, если не встречалось.
//
//Входные данные
//
//Вводится число N - количество элементов списка, а затем N чисел.
//
//Выходные данные
//
//Выведите ответ на задачу.
//
//Sample Input:
//
//6
//1 2 3 2 3 4
//Sample Output:
//
//NO
//NO
//NO
//YES
//YES
//NO

#include "t02_new.h"
#include <iostream>
#include <set>




using namespace std;

int t02_new()
{
    int N;
    cin >> N;
    set <int> different;
    for (int i = 0; i < N; i++)
    {
        int numb;
        cin >> numb;
        if (different.count(numb) != 0)
        {
            cout << "YES" << ' ';
        }
        else
        {
            cout << "NO" << ' ';
            different.insert(numb);
        }
    }

    return 0;
}