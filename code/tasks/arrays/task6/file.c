#include <stdio.h>
//Задать два целочисленных массива через список инициализации так, чтобы числа в эти
//массивах были упорядочены по возрастанию. Провести слияние двух массивов в новый
//массив, в котором все значения также упорядочены.
int main(){
    int first[10] = {3, 6, 14, 15, 19, 23, 27, 31, 39, 84};
    int second[10] = {1, 5, 9, 18, 23, 25, 33, 49, 76, 99};
    int united[20];
    for(int i=0; i<10; i++){
        united[i] = first[i];
    }
    for(int i=0; i<10; i++){
        united[i] = second[i];
    }
    
    return 0;
}

int maxIndexSearch(int arr[20]){
    int max = 0;
    int maxIndex = -1;
    for(int i=0; i<20; i++){
        if (arr[i] > max){
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
}

int selectionSort(int arr[20]){
    
    return
}