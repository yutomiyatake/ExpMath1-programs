#include <stdio.h>

int main()
{
    // printf("%d/%d is %f. \n", 3, 2, (double)3/2);

    // printf("%d/%d is %d. \n", 3, 2, 3/2);

    // printf("%d/%d is %.1f. \n", 3, 2, (float)3/2);

    // printf("%d/%d is %.1f. \n", 3, 2, 3.0/2);

    // printf("%d/%d is %.1f. \n", 3, 2, 1.5);

    // printf("%d/%d is %d.%d. \n", 3, 2, 1, 5);

    // printf("%d/%d is %.1f. \n", 3, 2, (double)3/(double)2);

    // printf("%d/%d is %s.\n", 3, 2, "1.5");

    // printf("%d/%d is %g. \n", 3, 2, 1.5);
    // %g は「実数を最適な形式で出力」
    return 0;
}

int main(){
    int a = 3;
    int b = 2;
    double c;
    c = (double)a / (double)b;

    printf("%d/%d is %2.1f.\n",3,2,c);
    // %2.1 は，「全体の幅が2」，「小数点以下の幅が1」．片方あるいは両方を省略可能．

    return 0;
}