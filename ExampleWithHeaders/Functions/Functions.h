#ifndef Functions  
#define Functions 

int convert(char ch){
    if(ch == 'A'){
        return 90;
    } else if (ch == 'B'){
        return 80;
    } else if(ch == 'C') {
        return 70;
    } else if(ch == 'D'){
        return 60;
    }
    return -1;
}

#endif  