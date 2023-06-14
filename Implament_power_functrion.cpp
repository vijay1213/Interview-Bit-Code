
int Solution::pow(int a, int y, int d) {
    // If a is 0
    if(a==0) return 0;
    
    long long res=1,x=a;
    while(y>0){
        // If y is odd, multiply x to the result.
        if(y&1) res = (res*x)%d;
        
        y = y>>1;       // reduce y by half
        
        x = (x*x)%d;    // Since we have reduce y by half, 
                        // that's why we have to square x.
    }
    return (d + res)%d;
}
