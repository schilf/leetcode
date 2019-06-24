int cmp(const void * a, const void * b); 

int heightChecker(int* heights, int heightsSize){
    int sum = 0;
    int arr[heightsSize];
    for(int i=0;i<heightsSize;i++)
        arr[i] = *(heights+i);

    qsort(arr,heightsSize,sizeof(int),cmp);
        
    for(int i=0;i<heightsSize;i++)
        sum = arr[i] != *(heights+i) ? sum +1 : sum;
    return sum;
}

int cmp(const void * a, const void * b){ 
    return (*(int*)a - *(int*)b);
}

