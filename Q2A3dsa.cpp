// Implement merge sort by taking user input
// ishita mittal
// 19105121

#include <iostream>
using namespace std;

void merge(int arr[], int p, int q, int r) {

    int n1 = q - p + 1;
    int n2 = r - q;
    int L[n1], M[n2];
    for (int i = 0; i < n1; i++)
        L[i] = arr[p + i];
    for (int j = 0; j < n2; j++)
        M[j] = arr[q + 1 + j];
    int i, j, k;
    i = 0;
    j = 0;
    k = p;
    while (i < n1 && j < n2) {
        if (L[i] <= M[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = M[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = M[j];
        j++;
        k++;
    }
}

void mergeSort(int array[], int  l, int r)
{
    if (l >= r)
        return; 
 
    int mid = l + (r - l)/2;
    mergeSort(array, l, mid);
    mergeSort(array, mid + 1, r);
    merge(array, l, mid, r);
}
 
int main()
{
    int n;
    cout << "Enter the size of the array";
    cin>>n;
    int arr[n];
    cout << "Enter all the elements of the array";
    for(int i=0; i<n; i++){
        int number;
        cin>>number;
        arr[i] = number;
    }
    mergeSort(arr, 0, n - 1);
 
    cout << "Sorted array is \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}