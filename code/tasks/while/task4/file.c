#include <stdio.h>


int main(){
    // инициализация переменной для хранения количества знаков после запятой для точного ответа
    int n = printf("Enter the accuracy: ");
    //использование функции scanf для ввода числа с клавиатуры
    scanf("%d", &n);

    // инициализация переменной для хранения суммы
    float sum = 0;
    // инициализация переменной для хранения значения i
    float i = 1;
    // инициализация переменной для хранения результата деления введённого PI на 4
    float pi = 3.14/4;

    //использование цикла while для вычисления суммы многочленов
    //цикл выполняется до момента пока сумма перестанет быть меньше полученного значения переменной pi
    while(sum < pi){
        //вычисление суммы
        sum += ((1/i)-(1/(i+2)));
        //увличение значения переменной i на 4
        i += 4; 
    }
    //вывод полученного значения pi
    printf("Pi = %.*f", n, sum*4);

    return 0;
}