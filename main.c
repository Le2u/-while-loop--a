#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a ;
    int n = 0 ;
    
    printf("请输入一个正整数\n");
    scanf("%d",&a);
    do {
        a /= 10 ;
        n++ ;
    }while ( a > 0 );
    
    printf("%d\n",n);
    return 0;
}
