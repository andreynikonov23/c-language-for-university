#include <stdio.h>

int main(){
    //Ввод числа n пользователем
    printf("Enter the number\n");
    int n;
    scanf("%d", &n);
    //Переменная sum, которая будет считывать сумму положительных чисел из цикла
    int sum = 0;
    //Переменная count, которая будет считать первые n целых положительных чисел
    int count = 0;
    //Цикл
    for(int i=0; count <= n; i++){
        //Если i - четное число, то прибавить это число к общей сумме и переменная count увеличится на 1
        if (i%2 == 0){
            sum += i;
            count++;
        }
    }
    //Вывод результата
    printf("Result = %d", sum);
    
    return 0;
}