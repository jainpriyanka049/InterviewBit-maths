int num(int i){
    int j = 1;
    int num = 1;
    while(j <= i){
        num = num*5;
        j++;
    }
    return num;
}

int Solution::trailingZeroes(int A) {
    int count = 0;
    int i = 1;
    while(num(i) <= A){
        count = count + (A/num(i));
        i++;
    }
    
    return count;
}

