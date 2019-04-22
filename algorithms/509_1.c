#include <stdio.h>
int fib(int N);

int main(){
    int n;
    scanf("%d",&n);
    printf("%d\n",fib(n));
    return 0;
}

int fib(int N) {
    if(N == 0)
        return 0;
    if(N == 1)
        return 1;
    return fib(N-1)+fib(N-2);
}
