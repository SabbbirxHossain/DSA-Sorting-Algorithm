#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout << "enter the size of array:" ;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "element " << i+1 << " : ";
        cin >> arr[i];
    }

    cout << "Before sorting the array." ;
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;

    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout << "Sorted array:";
    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;
    return 0;
}
