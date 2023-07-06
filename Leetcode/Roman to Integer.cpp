int valueOf(char c){
    int m;
    switch(c){
        case 'I': m = 1; break;
        case 'V': m = 5; break;
        case 'X': m = 10; break;
        case 'L': m = 50; break;
        case 'C': m = 100; break;
        case 'D': m = 500; break;
        case 'M': m = 1000; break;
    }
    return m;
}

int romanToInt(char * s){
    
    int len = strlen(s);
    int num = valueOf(s[len-1]);
    
    for(int i = len-2; i >= 0; i--){
        int m = valueOf(s[i+1]);
        int n = valueOf(s[i]);
        if( m > n ) num -= n;
        else num += n;
    }
    return num;
}