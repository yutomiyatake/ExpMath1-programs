#include <stdio.h>

int main(){
    int a = 1;
    int n = 0;

    while (a < 101){
        n = n + a;
        a = a + 1;
        if (a == 10)
            break;
    }
    
    printf("n=%d\n",n);
    return 0;
}