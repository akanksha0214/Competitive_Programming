#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int binarySearch(int arr[], int n, int key)
{
    int s = 0;
    int e = n;

    while (s <= e)
    {
        int mid =s+(e-s)/2; //to be in the int range

        if (arr[mid] == key)
        {
            return mid;
        }

        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        else
        {
            s = mid + 1;
        }
    }
    mid=s+(e-s)/2;
    return -1;
}

int main()
{
    int n;
    cin >> n;

    int arr[n];
   
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int key;
    cin >> key;
     

    cout << binarySearch(arr, n, key) << endl;
 
    return 0;
}
