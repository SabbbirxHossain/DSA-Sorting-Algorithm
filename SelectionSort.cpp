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

    for(int i= 0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                // swap
                int temp = arr[j];
                arr[j]= arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "After the sorting: ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
