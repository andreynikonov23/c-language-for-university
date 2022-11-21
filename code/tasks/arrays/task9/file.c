#include <stdio.h>
#include <stdlib.h>
/*
Сгенерировать двумерный массив размером 6х5 с помощью генератора случайных чисел от 0 до 9999.
Вывести массив на экран в виде матрицы. Также вывести на экран
суммы элементов по столбцам внизу матрицы и суммы по строкам справа от неё след.
образом:
1 2 3 4 | 10
5 6 7 8 | 26
----------
6 8 10 12
*/
int main(){
    srand(time(NULL));
    //Создание двумерного массива 6х5
    int arr[6][5];
    //Заполнение массива рандомными числами
    for(int i=0; i<6; i++){
        for(int j=0; j<5; j++){
            int random = rand()%9999;
            arr[i][j] = random;
        }
    }
    
    for(int i=0; i<6; i++){
        int sumWidth = 0;
        for(int j=0; j<5; j++){
            int num = arr[i][j];
            sumWidth +=num;
            if (num < 10){
                printf("   %d ", num);
            } else if (num >= 10 && num < 100){
                printf(" %d  ", num);
            } else if (num >=100 && num < 1000){
                printf(" %d ", num);
            } else{
                printf("%d ", num);
            }
        }
        printf("| %d", sumWidth);
        printf("\n");
    }
    for(int i=0; i<6; i++){
        
    }
    return 0;
}