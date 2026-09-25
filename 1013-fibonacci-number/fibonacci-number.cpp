class Solution {
public:
    int fib(int n) {
        // int fib(0)=0;
        // int fib(1)=1;
        if(n==0){
            return 0;
        }
        if(n==1){
            return 1;
        }

        return fib(n-1)+fib(n-2);
    }
};