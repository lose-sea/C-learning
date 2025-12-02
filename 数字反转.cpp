#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int reverse( int number )
{
    int flag = number > 0 ? 1 : -1;
    number = abs(number);
    int temp = 0;
    while(number){
        temp = temp*10+(number%10);
        number /= 10;
    }
    return flag*temp;
}
int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

