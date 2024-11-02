#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    cout << "before sort: ";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }cout << endl;


    for(i=0;i<n-1;i++)
    {
        int current = i;
        for(j=i+1 ;j<n;j++)
        {
            if(arr[j] < arr[current])
            {
                current = j;
            }
        }
        if(current != i)
        {
            int temp = arr[current];
            arr[current] = arr[i];
            arr[i] = temp;
        }
    }

    cout << "after sort: ";
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }cout << endl;
}
