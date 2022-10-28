#include <stdio.h>

//Написать программу, проверяющую четность или нечетность введённого числа.

int main(){
    //Ввод числа пользователем
    int num;
    printf("Enter the number\n");
    scanf("%d", &num);

    if (num%2 == 0){
        printf("This is an even number\n"); //Если число четное - выведется это сообщение
    } else{
        printf("This is an odd number\n"); //Если не число четное - выведется это сообщение
    }
    return 0;
}