#include <stdio.h>
/*
    Эквивалентны ли следующие фрагменты программы:
    a) for ( ; e2 ; ) S; и while ( e2 ) S;
    b) for ( ; ; ) S; и while (1) S;
*/
int main(){
    int e2 = 12;
    for(; e2=12; ){
        printf("for=S1\n");
    }
    while(e2=12){
        printf("while=S1\n");
    }
    for(; ;){
        printf("for=S2\n");
    }
    while(1){
        printf("while=S2\n");
    }
    return 0;
    //И элемент а и элемент b будут эквивалентны, т.к все эти циклы выполняются бесконечно
}