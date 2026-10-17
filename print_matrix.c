#include <stdio.h>

int main() {
    int rows = 4;
    int cols = 4; 
    int matrix[4][4] = { {6, 2, 8, 4},
                         {5, 6, 7, 8},
                         {5, 6, 7, 8},
                         {9, 7, 11, 12} };
                        
    // Печать матрицы                    
    for (int i = 0; i < rows; i++) {            
        for (int j = 0; j < cols; j++){
            printf("%5d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}