#include <stdio.h>

int main(){
    int val;

    scanf("%d", &val);

    for (int i = 1; i <= val; i = i + 2){
        printf("%d ", i);
    }
    printf("\n");
    for (int j = val; j >= 1; j = j - 2){
        printf("%d ", j);
    }
    return 0;
}