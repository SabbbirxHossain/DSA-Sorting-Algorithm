#include<iostream>
using namespace std;
int main()
{
    int n, key;
    cin >> n;
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i];
    }
    cout << "enter the searching key: ";
    cin >> key;

    int low =0,high =n-1,mid;
    bool found = false;

    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid]== key){
            found = true;
            break;
        }else if(arr[mid] < key){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    if(found){
        cout << "element found at index " << mid << " and position " << mid+1 <<  endl;
    }else{
    cout << "element is not found";
    }

    return 0;
}
