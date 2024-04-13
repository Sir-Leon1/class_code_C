#include <stdio.h>

void insert(int arr[], int *size, int element, int position){
    if (position < 0 || position > *size){
        printf("Invalid position for insertion\n");
        return;
    }

    for (int i = *size; i > position; i--){
        arr[i] = arr[i - 1];
    }
    arr[position] = element;
    (*size)++;
}

void delete(int arr[], int *size, int position){
    if(position < 0 || position >= *size){
        printf("Invalid position for delete\n");
        return;
    }
    for (int i = position; i < *size - 1; i++){
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void update(int arr[], int size, int element, int position)
{
    if (position < 0 || position >= size)
    {
        printf("Invalid position\n");
        return;
    }
    arr[position] = element;
}

void search(int arr[], int size, int element){
    for (int i = 0; i < size; i++){
        if (arr[i] == element){
            printf("Element %d found at index %d \n", element, i);
            return;
        }
    }
    printf("Element not found");
}

void print_array(int arr[], int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[100], size = 0;
    print_array(arr, size);

    insert(arr, &size, 10, 0);
    insert(arr, &size, 20, 1);
    insert(arr, &size, 30, 2);
    print_array(arr, size);

    delete(arr, &size, 1);
    print_array(arr, size);

    update(arr, size, 60, 0);
    print_array(arr, size);

    search(arr, size, 30);
}