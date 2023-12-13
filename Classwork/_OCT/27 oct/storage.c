#include <stdio.h>

void func1();
void main(){
    int a = 5;
    func1();
    func1();
    {
        auto int a= 10;
        printf("inside box: %d\n", a);
    }
}
