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
    int x=0,y=1;
    for(int i=2;i<=N;i++){
	y += x;
	x = y-x;
    }
    return y;
}
