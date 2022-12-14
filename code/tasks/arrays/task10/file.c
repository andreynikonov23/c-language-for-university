#include <stdio.h>
#include <stdlib.h>
/*
    Сгенерировать двумерный массив размером 5х5 с помощью генератора случайных чисел от 0 до 9999.
    Рассчитать сумму элементов, лежащих на главной диагонали, и сумму элементов,
    лежащих на обратной диагонали.
*/
int main(){
    //Служит, чтобы рандомные числа генерировались каждый раз разные после компиляции
    srand(time(NULL));
    //Двумерный массив 5х5
    int arr[5][5];
    //Заполнение массива рандомными числами
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            int random = rand()%9999;
            arr[i][j] = random;
        }
    }
    for(int i=0; i<5; i++){ //Этот цикл отвечает за переход по строкам
        for(int j=0; j<5; j++){ //Этот цикл отвечает за переход по элементам
            //Присвоение переменной num числа из массива
            int num = arr[i][j];
            //Если число из массива меньше 10,
            //то поставить перед этим числом три пробела и вывести в консоль
            if (num < 10){
                printf("   %d ", num);
            }
            //Если число из массива больше или равно 10, но меньше ста,
            //то поставить перед числом пробел и после два, и вывести это число в консоль
             else if (num >= 10 && num < 100){
                printf(" %d  ", num);
            } 
            //Если число из массива больше или равно 100, но меньше 1000,
            //то поставить перед числом пробел и вывести в консоль
             else if (num >=100 && num < 1000){
                printf(" %d ", num);
            }
            //Если число больше или равно 1000, вывести это число
             else{
                printf("%d ", num);
            }
        }
        //Переход на новую строку
        printf("\n");
    }
    //Переменная которая будет хранить в себе сумму главной диагонали
    int sumFirst = 0;
    //Цикл который проходит по каждому элементу
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            //Если индексы строки и элемента одинаковы, то считать сумму элементов
            if (i==j){
                sumFirst += arr[i][j];
            }
        }
    }
    //Переменная которая будет хранить в себе сумму обратной диагонали
    int sumSecond = 0;
    //Цикл. i переходит по строкам, от 0 до 4. j переходит по элементам строки
    //В данном цикле подсчет идет следующим алгоритмом (i-j): 0-4, 1-3, 2-2, 3-1, 4-0
    for(int i=0, j=4; i<5; i++, j--){
        sumSecond += arr[i][j];
    }
    //Вывод результата в консоль
    printf("First Diagonal: %d\n", sumFirst);
    printf("Second Diagonal: %d\n", sumSecond);
    return 0;
}