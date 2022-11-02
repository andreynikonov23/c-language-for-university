#include <stdio.h>

//Написать программу, которая вычисляет факториал введенного с клавиатуры числа.

int main(){
    //Ввод числа n пользователем
    printf("Enter the number\n");
    int n;
    scanf("%d", &n);
    //Результат вычитания факториала
    int factorial = 1;
    //Предыдущий результат витка будет умножаться на i
    for(int i=1; i<=n; i++){
        factorial *= i;
    }
    //Вывод результата в консоль
    printf("%d! = %d", n, factorial);
    
    return 0;
}