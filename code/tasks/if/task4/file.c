#include <stdio.h>

//Написать программу, вычисляющую минимум из трёх введённых чисел. Вывести числа в порядке возрастания.

//Точка входа в программу 
int main(){
    //Создание переменных
    int a;
    int b;
    int c;
    //Инициализация переменных пользователем
    printf("Enter 3 numbers\n");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    //Сортировка
    printf("\nsorting\n");
    
    if (a < b && a < c){ //Если а меньше b и меньше с
        printf("%d\n%d\n%d\n", a, b, c);
    } else if (a > b && a < c){ //Если a больше b и меньше с
        printf("%d\n%d\n%d\n", b, a, c);
    } else if(a < b && a > c){ //Если а меньше b и больше с
        printf("%d\n%d\n%d\n", c, a, b);
    } else if (b < a && b < c){ //Если b меньше а и меньше с
        printf("%d\n%d\n%d\n", b, a, c);
    } else if (c < a && c < b){ //Если с меньше а и меньше b
        printf("%d\n%d\n%d\n", c, b, a);
    }
    return 0;
}