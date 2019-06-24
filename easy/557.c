char * reverseWords(char * s){
    int i = 0;
    int l,r;
    l = r = 0;
    while(*(s+i) != '\0'){
	if(*(s+i) == ' '){
	    r = i-1;
	    while(l<r){
		*(s+l) = *(s+l) ^ *(s+r);
		*(s+r) = *(s+l) ^ *(s+r);
		*(s+l) = *(s+l) ^ *(s+r);
		l++;
		r--;
	    }
	    l = i+1;
	}
	i++;
    }
    
	    r = i-1;
	    while(l<r){
		*(s+l) = *(s+l) ^ *(s+r);
		*(s+r) = *(s+l) ^ *(s+r);
		*(s+l) = *(s+l) ^ *(s+r);
		l++;
		r--;
	    }

    return s;
}
