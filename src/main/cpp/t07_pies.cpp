//Покупка пирожков
//
//
//Пирожок в столовой стоит A рублей и B копеек. Определите, сколько рублей и копеек нужно заплатить за N пирожков.
//
//
//
//Формат входных данных
//
//        Программа получает на вход три числа: A, B, N - целые, положительные, не превышают 10000.
//
//Формат выходных данных
//
//        Программа должна вывести два числа через пробел: стоимость покупки в рублях и копейках.
//
//
//Sample Input 1:
//
//10
//15
//2
//Sample Output 1:
//
//20 30
//Sample Input 2:
//
//2
//50
//4
//Sample Output 2:
//
//10 0

#include "t07_pies.h"
#include <iostream>

using namespace std;

int t07_pies() {
    int A;
    int B;
    int N;
    cin >> A;
    cin >> B;
    cin >> N;
    int number;
    number = A * 100 + B;
    int rub;
    int cop;
    number = number * N;
    rub = number / 100;
    cop = number - rub*100;
    cout << rub << " " << cop;
    return 0;


};