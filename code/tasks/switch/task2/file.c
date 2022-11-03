#include <stdio.h>

int main(){
    //Ввод данных пользователем
    printf("What time is it now?\n");
    int t;
    scanf("%d", &t);
    //Варианты вывода
    switch (t) {
        //Пожелание спокойной ночи
        case 22:
            printf("Good Night!\n");
            break;
        case 23:
            printf("Good Night!\n");
            break;
        case 0:
            printf("Good Night!\n");
            break;
        case 1:
            printf("Good Night!\n");
            break;
        case 2:
            printf("Good Night!\n");
            break;
        case 3:
            printf("Good Night!\n");
            break;
        //Пожелание доброго утра
        case 4:
            printf("Good Morning!\n");
            break;
        case 5:
            printf("Good Morning!\n");
            break;
        case 6:
            printf("Good Morning!\n");
            break;
        case 7:
            printf("Good Morning!\n");
            break;
        case 8:
            printf("Good Morning!\n");
            break;
        case 9:
            printf("Good Morning!\n");
            break;
        case 10:
            printf("Good Morning!\n");
            break;
        //Пожелание хорошего дня
        case 11:
            printf("Good Day!\n");
            break;
        case 12:
            printf("Good Day!\n");
            break;
        case 13:
            printf("Good Day!\n");
            break;
        case 14:
            printf("Good Day!\n");
            break;
        //Пожелание доброго дня
        case 15:
            printf("Good Afternoon!\n");
            break;
        case 16:
            printf("Good Afternoon!\n");
            break;
        //Пожелание доброго вечера
        case 17:
            printf("Good Evening!\n");
            break;
        case 18:
            printf("Good Evening!\n");
            break;
        case 19:
            printf("Good Evening!\n");
            break;
        case 20:
            printf("Good Evening!\n");
            break;
        case 21:
            printf("Good Evening!\n");
            break;
        //Если пользователь ввел неправильное значение
        default:
            printf("What?!");
            break;
    }
    return 0;
}