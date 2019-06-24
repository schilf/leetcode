int findComplement(int num){
    int res = 0;
    int tmp = num;
    while(num>0){
        num = num >> 1;
        res = res << 1;
        res++;
    }   
    return res ^ tmp;                                                 
}
