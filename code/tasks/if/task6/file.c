#include <stdio.h>

//Написать программу, проверяющую, делится ли на три введённое число

int main(){
    //Инициализация переменной пользователем
    printf("Enter the number\n");
    int num;
    scanf("%d", &num);


    if (num %3 == 0){
        printf("true"); //Если число делется на 3, то выведется "true"
    } else{
        printf("false"); //Иначе "false"
    }


    return 0;
}