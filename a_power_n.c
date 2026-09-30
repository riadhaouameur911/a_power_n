#include<stdio.h>
int power(int a, int n){
    if(n==0){
        return 1;
    }
    return power(a,n-1)*a;
  
}

int main(){
    int  a= 5;
    int  n= 3;
    printf("power(%d,%d) = %d",a,n,power(a,n));
    return 0;

}