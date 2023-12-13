#include <stdio.h>

void func(int a, int b) {
    a+=b;
    printf("in func, a=%d, b=%d\n", a, b);

}
int main(void){
    int x = 9, y = 10;
    func(x,y);
    printf("in main, x=%d, y=%d\n", x, y);

    return 0;
    }
