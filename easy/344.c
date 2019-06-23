
void reverseString(char* s, int sSize){
    int i = 0;
    while(i < sSize/2){
	*(s+i) = *(s+i) ^ *(s+sSize-i-1);
	*(s+sSize-i-1) = *(s+i) ^ *(s+sSize-i-1);
	*(s+i) = *(s+i) ^ *(s+sSize-i-1);
	i++;
    }
}
