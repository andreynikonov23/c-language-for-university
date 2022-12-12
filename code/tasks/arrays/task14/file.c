#include <stdio.h>
#include <stdlib.h>
#include <malloc.h> //Библиотека для поддержки динамического выделения памяти

int main(){
    //Служит, чтобы рандомные числа генерировались каждый раз разные после компиляции
    srand(time(NULL));
    //Указатель на адресс где лежит массив в области памяти
    int* a;
    //Рандомный размер массива от 1 до 100 и вывод размера на экран
    int length = rand()%99 + 1;
    printf("length = %d\n", length);
    //Запись динамического выделения памяти для массива a
    a = (int*) malloc(length * sizeof(int));
    //Заполнение массива рандомными числами
    for(int i=0; i<length; i++){
        int random = rand()%999;
        a[i] = random;
    }
    //Вывод элементов на экран
    for(int i=0; i<length; i++){
        printf("%d ", a[i]);
    }
    //Индекс введеный пользоватем
    int index;
    printf("Enter the index\n");
    scanf("%d", &index);
    
    //Если введенный индекс меньше нуля, то выдать сообщение об ошибке и завершить программу
    if (index < 0){
        printf("index must be greater than zero\n");
        return 1;
    }
    //Если введенный индекс больше длинны массива, то выдать сообщение об ошибке и завершить программу
    if (index > length){
        printf("index is larger than the size of the array\n");
        return 1;
    }

    //Вывод значения массива
    printf("%d", a[index]);
    
    return 0;
}