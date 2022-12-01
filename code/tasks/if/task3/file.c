#include <stdio.h>

//Написать программу, вычисляющую логическое выражение x ∨ y ∧ z¯.

int main(){
    //Вывод названий переменных и операций
    printf("x y z z¯ y^z xVy^z\n");
    //Создание переменных
    int x = 0;
    int y = 0;
    int z = 0;
    //Цикл который будет повторяться 8 рах
    //m = 2^n (n - колличество переменных) => m=2^3 = 8
    for(int i=0; i<8; i++){
        //Если i (номер витка цикла) не четный, то z = 1
        if (i%2 != 0){
            z = 1;
        }
        //Если i = 2, 3, 6 или 7, то y = 1
        if (i==2 || i==3 || i==6 || i==7){
            y = 1;
        }
        //Если i больше 3, то x = 1
        if (i > 3){
            x = 1;
        }

        //Решение первой операции z¯
        //f1 - результат первой операции
        int f1 = 0;
        //Если z равен нулю, то z будет 1, и наоборот
        if (z==0){
            f1 = 1;
        } else if(z==1){
            f1 = 0;
        }

        //Решение второй операции y^z
        //f2 - результат второй операции
        int f2 = 0;
        //Если y и f1 равны нулю, то f2 будет 0, иначе если они равны 1, то f2 = 1
        if(y==0 && f1==0){
            f2 = 0;
        } else if(y==1 && f1==1){
            f2 = 1;
        }


        //Решение третей операции x ∨ y ∧ z¯
        //f3 - результат третей функции
        int f3 = 0;
        //Если x или f2 равны 1, то f3 будет равен 1, иначе 0
        if (x==1 || f2==1){
            f3 = 1;
        }


        //Вывод результата первой строки
        printf("%d %d %d %d  %d   %d\n", x, y, z, f1, f2, f3);

        //Обнуление всех переменных
        x = 0;
        y = 0;
        z = 0;
        f1 = 0;
        f2 = 0;
        f3 = 0;
    }
    return 0;
}