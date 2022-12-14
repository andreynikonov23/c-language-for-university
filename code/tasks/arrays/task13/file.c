#include <stdio.h>
/*
    Дана программа, перебирающая индексы массива произвольной размерности в порядке
    от старшего индекса к младшему. Изменить нижеприведённую программу так, чтобы
    перебор осуществлялся в обратном направлении: от младшего индекса к старшему.*
*/
int main(){
    int dim = 4;
    int i,j,N[dim],n[dim],num;
    num=1;
    for(i=0; i<dim; i++) {
        N[i] = i+2;
        num *= N[i];
        n[i]=0;
    }
    for(i=0;i<num;i++) {
        //В данном цикле нужно поменять начальное значение переменной на последний индекс массива,
        //Изменить условие и сделать уменьшение позиции индекса
        for(j=3;j>=0;j--) {
            printf("%d ",n[j]);
        }
        printf("\n");
        j=0;
        do {
            n[j] = (n[j]+1) % N[j];
        }
        while(!n[j] && ++j<dim);
    }
    return 0;
}