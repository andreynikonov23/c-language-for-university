#include <stdio.h>

int main(){
    int e1;
    int e2;
    int S1;
    int S2;
    if (e1) 
        if (e2)
            S1;
        else
            S2;
    
    if (e1) {
        if (e2)
            S1;
        else S2;
        }
    
    if (e1) {
        if (e2)
            S1;
    } else
        S2;
    
    if (e1) 
        if (e2)
            S1;
        else;
    else 
        S2;
    
    if (e1) 
        if (e2)
            S1;
        else S2;
    else;
    
    return 0;
}