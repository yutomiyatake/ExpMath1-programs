#include <stdio.h>

int fac(int n){
    if (n==0){
        return 1;
    }else{
        return n * fac(n-1);
    }
}

int main(){
    int n, x;
    n = 10;
    x = fac(n); // n の階乗

    printf("%d!=%d\n",n,x);
    return 0;
}