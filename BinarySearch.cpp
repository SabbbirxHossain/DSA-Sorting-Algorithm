#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, key, mid ;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++){
        cout << "element " << i+1 << " : " ;
        cin >> arr[i];
    }

    for(i=0;i<n;i++){
        cout << arr[i] << " ";
    }cout << endl;

    cout << "please enter the search value: ";
    cin >> key;

    int low =0,high = n-1;
    bool found = false;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            found = true;
            break;
        }else if(arr[mid] < key)
        {
            low = mid +1;
        }else
        {
            high = mid -1;
        }
    }
    if(found){
        cout << "the element is found at index " << mid << " and position " << mid+1 << endl;
    }else
    {
        cout << "element is not found.";
    }
    return 0;
}
