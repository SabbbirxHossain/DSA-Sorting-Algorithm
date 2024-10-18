#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter the array size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cout << "element " << i+1 << " : ";
        cin >> arr[i];
    }
    cout << "Before the sorting: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sorting algorithm condition
    for (int i = 1; i < n; i++) {
        int current = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > current) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = current;
    }

    cout << "After the sorting: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
