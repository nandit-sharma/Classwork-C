#include <stdio.h>

int main() {
    // Declare a 2D array with 3 rows and 4 columns
    int matrix[3][4];

    // Initialize the elements of the 2D array
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            matrix[i][j] = i * 4 + j;
        }
    }

    // Access and print the elements of the 2D array
    printf("2D Array Elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

void main() {
    int rows = 3;
    int columns = 3;
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
// }

// #include <stdio.h>

// void main() {
//     int rows = 3;
//     int columns = 3;
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     int middlecolumn = 1;
//     for(int i=0; i<3; i++){
        
//         printf("%d ", matrix[i][middlecolumn]);
//         printf("\n");
//     }
// }

// #include <stdio.h>

// void main() {
//     int rows = 3;
//     int columns = 3;
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             if(i==j){
//             printf("%d ", matrix[i][j]);
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// void main() {
//     int rows = 3;
//     int columns = 3;
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     for(int i=0; i<3; i++){
//         for(int j=0; j<3; j++){
//             if(i+j==2){
//             printf("%d ", matrix[i][j]);
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }

// #include <stdio.h>

// void main() {
//     int rows = 3;
//     int columns = 3;
//     int matrix[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<columns; j++){
//             if(i==j || i+j==2){
//                 printf("%d ", matrix[i][j]);
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }