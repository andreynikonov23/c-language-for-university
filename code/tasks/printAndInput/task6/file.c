#include <stdio.h>


/*
    Написать инструкции вывода значений дробных переменных х1 и х2. На экране перед
    значением переменной должен быть выведен поясняющий текст, представляющий собой
    имя переменной, за которым следует знак "равно".
*/


int main(){
    //Инициализация переменных
    double x1 = 2314.2;
    double x2 = 4674.7;

    //Вывод
    printf("double x1 = %lf\n", x1);
    printf("double x2 = %lf", x2);
    
        
    return 0;
}