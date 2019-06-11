char * removeOuterParentheses(char * S){
    int len = (int)strlen(S);
    int temp = 0,sum = 0;
    for (int i = 0; i < len; i++) {
        if(*(S+i) == '('){
            if (temp != 0) {
                *(S+sum++) = '(';
            }
            temp++;
        }else{
            if (temp != 1) {
                *(S+sum++) = ')';
            }
            temp--;
        }
    }
    *(S+sum++) = '\0';
    return S;
}
