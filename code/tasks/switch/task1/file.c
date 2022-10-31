#include <stdio.h>

//Напишите программу, которая запрашивает у пользователя номер дня недели, затем
//выводит название дня недели или сообщение об ошибке, если введены неверные данные

int main(){
    //Ввод данных пользвателем
    printf("Enter the number of day of weekend\n");
    int number;
    scanf("%d", &number);
    
    switch(number){ //В скобках указанна с какой переменной работает switch
        case 1: //Вариант выбора 1 - Понедельник
            printf("Monday\n");
            break;
        case 2: //Вариант выбора 2 - Вторник
            printf("Tuesday\n");
            break;
        case 3: //Вариант выбора 3 - Среда
            printf("Wednesday\n");
            break;
        case 4: //Вариант выбора 4 - Четверг
            printf("Thursday\n");
            break;
        case 5: //Вариант выбора 5 - Пятница
            printf("Friday\n");
            break;
        case 6: //Вариант выбора 6 - Суббота
            printf("Saturday\n");
            break;
        case 7: //Вариант выбора 7 - Воскресенье
            printf("Sunday\n");
            break;
        default:
            printf("Invalid value\n");
    }
    return 0;
}