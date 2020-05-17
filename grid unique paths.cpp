long long int permute(int x, int y){
    long long int sol = 1;
    for(int i = 1; i <= y; i++){
        sol = sol*(x-i+1);
    }
    return sol;
}

long long int fact(int x){
    if(x == 1){
        return 1;
    }
    else{
        return x*fact(x-1);
    }
}

int Solution::uniquePaths(int A, int B) {
    
    int x = A-1;
    int y = B-1;
    
    if(x == 0 || y == 0){
        return 1;
    }
    
    int small = x;
    if(y < x){
        small = y;
    }
    int ans = int (permute(x+y, small)/fact(small));
    
    return ans;
}
