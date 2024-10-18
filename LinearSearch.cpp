#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, i , key;
    cout << "enter array size: ";
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cout << "element " << i+1 << " : ";
        cin >> arr[i];
    }

    for(i=0;i<n;i++)
    {
        cout <<arr[i] << " " ;
    }cout << endl;

    cout << "please enter the search value: ";
    cin >> key;

    bool found = false;

    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
            found = true;
            break;
        }
    }
    if(found){
        cout << "element found at index " << i << " and position " << i+1;
    }else
    {
        cout << "element not found.";
    }
    return 0;
}
