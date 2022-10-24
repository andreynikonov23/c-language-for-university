#include <stdio.h>
//Импорт библиотеки для математических операций
#include <math.h>

/*
    Написать программу решения квадратного уравнения. Программа должна проверять
    правильность исходных данных и в случае, если коэффициент при второй степени неизвестного равен нулю,
    выводить соответствующее сообщение. Также выводить ошибку
    в случае отрицательного дискриминанта.

*/


int main(){
    //Ввод коэффициентов пользователем
    printf("Insert number a:\n");
    int a;
    scanf("%d", &a);
    printf("Insert number b:\n");
    int b;
    scanf("%d", &b);
    printf("Insert number c:\n");
    int c;
    scanf("%d", &c);
    
    //если коэффициент при второй степени неизвестного равен нулю
    if (a == 0){
        printf("Coefficient a must not be zero\n");
        return 0;
    }
    //получившееся уравнение
    printf("Your equation:\n%dx^2 + %dx + %d = 0\n", a, b, c);

    //Решение
    int discriminant = b*b - 4*a*c;
    double x1;
    double x2;
    //выводить ошибку в случае отрицательного дискриминанта
    if (discriminant < 0){
        printf("There are no roots");
        return 1;
    } else if(discriminant == 0){ //Если дискриминант равен нулю
        x1 = -b / 2*a;
    } else{ //Если дискриминант больше нуля
        x1 = (-b - sqrt(discriminant)) / (2*a);
        x2 = (-b + sqrt(discriminant)) / (2*a);
    }
    //Вывод результата
    printf("x1 = %f; x2 = %f", x1, x2);
    return 0;
}