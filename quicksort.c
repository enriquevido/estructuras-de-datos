#include <stdio.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int pivotPosition(int arr[], int left, int right){
    int pivot = arr[right];
    int i = (left - 1);
    for (int j = left; j <= right; j++){
        if (arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[right]);
    return (i+1);
}

void quickSort(int arr[], int left, int right){
    if (left < right){
        int piv = pivotPosition(arr, left, right);

        quickSort(arr, left, piv-1);
        quickSort(arr, piv+1, right);
    }
    
}
void printArray(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {10, 2, 23, 43, 6, 8, 25, 15};
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    
    printf("Arreglo original: \n");
    printArray(arr, arrSize);

    quickSort(arr, 0, arrSize - 1);
    
    printf("Arreglo ordenado: \n");
    printArray(arr, arrSize);
    return 0;
}