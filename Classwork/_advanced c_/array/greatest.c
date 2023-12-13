#include <stdio.h>

int main() {
    int array[5] = {13, 62, 78, 62, 78};
    int num = array[0];
    for(int i = 0; i<5;i++){
        if (array[i]> num){
            num = array[i];
        }
        
    }
    printf("The greatest element is %d.", num);
    return 0;
}
