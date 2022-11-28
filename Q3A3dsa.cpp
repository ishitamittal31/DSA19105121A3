// ishita mittal - 19105121

// a) number of comparisons
// In BUBBLE SORT, two adjacent elements are compared.
// If the adjacent elements are not at the correct position, swapping would be performed.
// comparison is made for adjacent elements based so that the largest element is placed at right place for increasing order

// In SELECTION SORT, the minimum element is selected from the array and swap 
// with an element which is at the beginning of the unsorted sub array.
// In selection sort, minimum element is found by comparing all the elements in inner loop.


// b) in BUBBLE SORT, there are at most n^2 swaps (n)(n-1)/2. 
//    in SELECTION SORT, there will be at most n swaps to place the most minimum number at the starting of unsorted array

// 5, 1, 4, 2, 8
// bubble sort - 
// 1, 5, 4, 2, 8 = 1 comparison 1 swap
// 1, 4, 5, 2, 8 = 1 comparison 1 swap
// 1, 4, 2, 5, 8 = 1 comparison 1 swap
// 1, 4, 2, 5, 8 = 1 comparison 0 swap
// 1, 4, 2, 5, 8 = 1 comparison 0 swap
// 1, 2, 4, 5, 8 = 2 comparison 1 swap

// 5, 1, 4, 2, 8
// selection sort - 
// 1, 5, 4, 2, 8 = 4 comparison 1 swap
// 1, 2, 4, 5, 8 = 3 comparison 1 swap
// 1, 2, 4, 5, 8 = 4 comparison 0 swap


#include <bits/stdc++.h>
using namespace std;
 
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
 
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
 
    // One by one move boundary of
    // unsorted subarray
    for (i = 0; i < n-1; i++)
    {
       
        // Find the minimum element in
        // unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;
 
        // Swap the found minimum element
        // with the first element
        if(min_idx!=i)
            swap(&arr[min_idx], &arr[i]);
    }
}

// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
 
        // Last i elements are already
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
 
// Function to print an array
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{
    int arr[] = { 5, 1, 4, 2, 8};
    int N = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, N);
    selectionSort(arr, N);
    cout << "Sorted array: \n";
    printArray(arr, N);
    return 0;
}