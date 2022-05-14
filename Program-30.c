// Implement Linear search and Binary search

#include <stdio.h>
int linearSearch(int arr[], int size, int element){
    for(int i=0; i<size; i++){
       if(arr[i]==element){
           return i;
       }
    }
    return -1;
}

int BinarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size - 1;
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid] < element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
   int size = sizeof(arr)/sizeof(int);
   int element;
   printf("enter the search element is: ");
   scanf("%d", &element);
   int searchATIndex = linearSearch(arr, size, element);
   int searchIndex = BinarySearch(arr, size, element);
   printf("Search %d is successful: %d", element, searchATIndex);
   printf("Search %d is successful: %d", element, searchIndex);
    return 0;
}