#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int* countBits(int num, int* returnSize);

int main(){
    int *r;
    r = countBits(5,r);
    for(int i=0;i<=5;i++)
	printf("%d,",*(r+i));
    return 0;
}

int* countBits(int num, int* returnSize){
    int *res = NULL;
    res = (int *)malloc(sizeof(int)*num);
    *res = 0;
    for(int i=1;i <= num;i*=2){
	for(int j = 0;j<i;j++){
	    *(res+i+j) = *(res+j)+1;
	}
    }
    return res;
}

// but  addr err   id don't know why  ,so ,i use php,php is the best language in the world
//this is php code
    function countBits($num) {
        $res[0] = 0;
        for($i=1;$i <= $num;$i*=2){
            for($j = 0;$j<$i && $j+$i<=$num;$j++){
                $res[$i+$j] = $res[$j]+1;
            }
        }
        return $res;
    }
