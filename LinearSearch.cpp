#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cout << "element " << i+1 << ":";
        cin >> arr[i];
    }
    cout << "The element of array that you enter :" ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << "please enter the value that you want to search: ";
    int s;
    cin >>s ;
    int temp = 0;
    for(int i=0;i<n;i++){
        if(arr[i]== s){
            cout << "the element is found at position " << i+1 ;
            temp=1;
            break;
        }
    }
    if(temp == 0){
        cout << "element is not found.";
    }


    return 0;
}
