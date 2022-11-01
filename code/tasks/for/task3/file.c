#include <stdio.h>

int main(){
    printf("Enter the number\n");
    int n;
    scanf("%d", &n);

    double count = 0;
    for(int i=1;i<=n;i++){

        if (i%2 == 0){
            count -= 1 / i;
            printf(" - %d", count);
        } else{
            count += 1 / i;
            printf(" + %d", count);
        }
    }
    printf("%f", count);
    return 0;
}