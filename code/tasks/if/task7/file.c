#include <stdio.h>
/*
Написать программу, выводящую оценку в баллах, если задана оценка в очках от 0 до
100. Соответствие между очками и баллами задано следующим образом:
от 0 до 20 – 2 балла;
от 21 до 40 – 3 балла;
от 41 до 80 – 4 балла;
от 81 до 100 – 5 баллов
*/
int main(){
    //Ввод данных пользователем
    printf("Enter the number of points from 0 to 100\n");
    int points;
    scanf("%d", &points);
    //Если введеное число меньше 0 или больше 100, то веведется ошибка
    if (points < 0 || points > 100){
        printf("Incorrect number of points entered");
        return 1;
    }
    
    if (points <= 20){ //от 0 до 20 – 2 балла
        printf("Rating 2\n"); 
    } else if (points >= 21 && points <= 40){ //от 21 до 40 – 3 балла
        printf("Rating 3\n");
    } else if (points >= 41 && points <= 80){ //от 41 до 80 – 4 балла
        printf("Rating 4\n");
    } else if (points >= 81 && points <=100){ //от 81 до 100 – 5 баллов
        printf("Rating 5\n");
    }
    
    return 0;
}
