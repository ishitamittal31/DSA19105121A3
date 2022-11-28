//Implement binary search using a recursive method
//ishita mittal
// 19105121

// for binary search, the array must be sorted

#include <bits/stdc++.h>
using namespace std;
int bS(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int middle = l + (r - l) / 2;
        if (arr[middle] == x) //middle element is the element
            return middle;
        if (arr[middle] > x) //middle element is greater than the element x
            return bS(arr, l, middle - 1, x);
 
        return bS(arr, middle + 1, r, x); //middle element is smaller than the element
    }
    return -1;
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
    cout << "Enter the number to be found";
    int x;
    cin>>x;
    int result = bS(arr, 0, n - 1, x);
    (result == -1)
        ? cout << "Not Present"
        : cout << "Present at index " << result;
    return 0;
}
