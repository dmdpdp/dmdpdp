#include <stdio.h>

void calc_add(int*, int, int);
void calc_sub(int*, int, int);
void calc_mul(int*, int, int);

int main() {
    int opt = 0;
    int a = 0, b = 0;
    int c = 0;
    void (*ptr[3])(int*, int, int) = {calc_add, calc_sub, calc_mul};
    
    printf("메뉴선택\n");
    printf("0-덧셈 1-뺄셈 2-곱셈\n");
    scanf("%d", &opt);
    
    printf("계산할 값을 입력하세요\n");
    scanf("%d %d", &a, &b);
    
    ptr[opt](&c, a, b);
    printf("실행결과 c = %d", c);
    
    return 0;
}

void calc_add(int* c, int a, int b) {
    *c = a + b; 
}

void calc_sub(int* c, int a, int b) {
    *c = a - b; 
}

void calc_mul(int* c, int a, int b) {
    *c = a * b; 
}
