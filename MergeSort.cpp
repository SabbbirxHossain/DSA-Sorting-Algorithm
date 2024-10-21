#include <iostream>
using namespace std;

void Merge(int arr[], int low, int mid, int high) {
    int i = low;
    int j = mid + 1;
    int k = low;
    int temp[100];

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= high) {
        temp[k++] = arr[j++];
    }

    // Incorrect index used here
    //for (int s = low; s <= high; s++) {
    //    arr[s] = temp[k];
    //}
    for (int s = low; s <= high; s++) {
        arr[s] = temp[s];
    }
}

void MergeSort(int arr[], int low, int high) {
    if (low < high) {
        int mid = low + (high - low) / 2;  // Avoid potential overflow
        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}

int main() {
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << " = ";
        cin >> arr[i];
    }

    MergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

