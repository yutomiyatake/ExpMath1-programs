#include <stdio.h>

int sum(int n){
    int i, x;
    x = 0;
    for (i=1; i<=n; i++){
        x = x + i;
    }
    return x;
}

int main(){
    int n, x;
    n = 10;
    x = sum(n); // 1 から n までの総和

    printf("x=%d\n",x);
    return 0;
}