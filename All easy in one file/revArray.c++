#include <iostream>
using namespace std;
int main()
{
    int n = 10; // Size of the array
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        // temp = arr[i];
        // arr[i] = arr[n - i - 1];
        // arr[n - i - 1] = temp;
        swap(arr[i], arr[n - i - 1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}