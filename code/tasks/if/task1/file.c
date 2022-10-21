#include <stdio.h>

int main(){
    //Создание переменных
    int a;
    int b;
    //Просим пользователя ввести значение а
    printf("Enter number a\n");
    //Если введенное значение пользователем это строка - то выводится "Invalid Value" и 
    //завершается программа
    if(scanf("%d", &a)){
    } else{
        printf("Invalid value\n");
        return 0;
    }
    //Просим пользователя ввести значение b
    printf("Enter number b\n");
    //Если введенное значение пользователем это строка - то выводится "Invalid Value" и 
    //завершается программа
    if(scanf("%d", &b)){
    } else{
        printf("Invalid value\n");
        return 0;
    }
    //Если число b равно нулю - то выводится "You can't divide by zero!" и завернается программа
    if (b == 0){
        printf("You can't divide by zero!\n");
        return 0;
    }
    //Деление a на b и вывод результата в консоль
    int result = a/b;
    printf("Result: %d", result);
    return 0;
}