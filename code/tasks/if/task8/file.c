#include <stdio.h>

//Эквивалентны ли следующие фрагменты программы:

/*
    1. 1 условие эквивалентно 2му и 5му условию, т.к в данном случае кавычки значения не имеют,
        если после условия указанна только одна строка кода, то компилятор отработает и без кавычек,
        а в 5м условии оператор else в конце пуст
    2. 3 условие эквивалентно 4му, т.к кавычки в данном случае роли не уграют,
        а else второго условия ничего не делает
*/
int main(){
    int e1;
    int e2;
    int S1;
    int S2;
    //1
    if (e1) 
        if (e2)
            S1;
        else
            S2;
    //2
    if (e1) {
        if (e2)
            S1;
        else 
            S2;
        }
    //3
    if (e1) {
        if (e2)
            S1;
    } else
        S2;
    //4
    if (e1) 
        if (e2)
            S1;
        else;
    else 
        S2;
    //5
    if (e1) 
        if (e2)
            S1;
        else S2;
    else;
    
    return 0;
}