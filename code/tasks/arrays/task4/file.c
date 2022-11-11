#include <stdio.h>
#include <stdlib.h>

//Вычислить среднее арифметическое чисел случайно сгенерированного целочисленного
//массива с диапазоном чисел от 0 до 99.
//При расчете средней не учитывать минимального и максимального значения элементов массива.
//Вывести среднее на экран

int main(){
    //Создание пустого массива размером в 10 эл-ов
    int arr[10];
    //Цикл для каждой ячейки массива
    for (int i=0; i<10; i++){
        //Запись рандомного числа 0-100 в ячейку
        arr[i] = rand()%100;
    }
    //Вывод каждого эл-та массива в консоль
    for(int i=0; i<10; i++){
        printf("%d ", arr[i]);
    }
    //Перенос на новую строку
    printf("\n");
    //Переменная которая будет самым маленьким числом массива,
    //изначально инициализированна первым эл-ом массива
    int min = arr[0];
    //Переменная которая будет указывать на индекс минимального числа в массиве
    int minIndex = -1;
    //Цикл который будет сравнивать переменную min с каждым эл-ом массива
    for(int i=0; i<10; i++){
        //Если min больше чем элемент массива, то min будет равняться этому элементу
        //А minIndex будет равен индексу массива
        if(min > arr[i]){
            min = arr[i];
            minIndex = i;
        }
    }
    //Переменная которая будет самым большим числом массива,
    //изначально инициализированна нулем
    int max = 0;
    //Переменная которая будет указывать на индекс максимального числа в массиве
    int maxIndex = -1;
    //Цикл который будет сравнивать переменную max с каждым эл-ом массива
    for(int i=0; i<10; i++){
        //Если элемент массива больше чем max, то max будет равен этому элементу
        //А maxIndex будет равен индексу массива
        if(arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }
    //Те ячейки массива, где расположены минимальное и максимальное число будут пустыми
    arr[minIndex] = 0;
    arr[maxIndex] = 0;
    //Сумма эл-ов массива
    int sum = 0;
    //Счет
    for(int i=0; i<10; i++){
        sum += arr[i];
    }
    //Расчет среднего арифметического
    double average = sum / 10.0;
    //Вывод результата на экран
    printf("Arithmetic mean is %f\n", average);
    
    return 0;
}