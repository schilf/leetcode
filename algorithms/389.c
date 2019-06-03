#include <stdio.h>

char findTheDifference(char* s, char* t);

int main(){
    char* s = "abcde";
    char* t = "abcd";
    printf("%c\n",findTheDifference(s,t));
    return 0;
}

char findTheDifference(char* s, char* t) {
    char sum = 0;
    while(*s != '\0'){
	sum ^= *s;
	s++;
    }
    while(*t != '\0'){
	sum ^= *t;
	t++;
    }
    return sum; 
}
