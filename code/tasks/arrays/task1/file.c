#include <stdio.h>

int main(){
    //Ввод 10 чисел пользователем, которые сохраняются в массив arr
    printf("Enter 5 integers\n");
    int arr[10];
    for (int i=0; i<5; i++){
        int num;
        scanf("%d", &num);
        arr[i] = num;
    }
    //Переменная min, значение которой - первый элемент массива
    int min = arr[0];
    //Цикл который пройдется по каждому элементу массива
    for(int i=0; i<5; i++){
        //Если min меньше чем элемент массива, то min присвоется этот элемент массива
        if (min > arr[i]){
            min = arr[i];
        }
    }
    //Вывод минимального числа в консоль
    printf("Min value is %d", min);
    return 0;
}