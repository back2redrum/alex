#include <stdio.h>

/*
у нас есть двумерный массив и в каждой строчке ищем чётные
и составляем одномерный массив из количества чётных в каждой строчке.

То же самое, но ищем в столбцах минимальные значения
и составляем одномерный массив из этих минимальных значений.

Далее ищем во всей матрице простые числа и также составляем из них одномерный массив 
и последнее в столбцах ищем числа заканчивающиеся на 5 и также составляем одномерный массив
*/

int main() {
    int array[5] = {-2, -7, -3, -4, -5};

    int matrix[4][4] = { {10, 2, 8, 4},
                         {5, 6, 7, 8},
                         {5, 6, 7, 8},
                         {9, 7, 11, 12} };
    int rows = 4;
    int cols = 4;                      

    // составляем одномерный массив из количества чётных в каждой строчке
    int array_even[rows];
    for (int i = 0; i < rows; i++) {
        int count = 0;
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] % 2 == 0)
                count++;
        }
        array_even[i] = count;  
    }

    // Печать массива array_even
    printf("array_even: ");
    for (int i = 0; i < rows; i++){ 
        printf("%d ", array_even[i]); 
    }                           
    printf("\n");

    int min = array[0];
    for (int i = 0; i < 5; i++){
        if (min > array[i])
            min = array[i];
    }
    printf("%d\n", min);
    //-------------------------------------------------

    
    // составляем одномерный массив из этих минимальных значений в столбцах
    int arr[cols];
    for (int j = 0; j < cols; j++){
        int min = matrix[0][j];     
        for (int i = 0; i < rows; i++) {
            if (min > matrix[i][j]) {
                min = matrix[i][j];
            } 
        }
        arr[j] = min;
    }
    printf("arr: ");
    for (int i = 0; i < cols; i++)
        printf("%d ", arr[i]);
    
    return 0;  // выход из main()
}











    // // Печать индексов                    
    // for (int i = 0; i < rows; i++) {            
    //     for (int j = 0; j < cols; j++){
    //         printf("(%d,%d) ", i, j);
    //     }
    //     printf("\n");
    // }