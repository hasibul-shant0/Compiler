#include <iostream>
using namespace std;

void findMinMax(int arr[], int n) {
    
    int min,max;
    min = max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
         min = arr[i];
        if (arr[i] > max)
         max = arr[i];
    }
    cout << "Minimum = " << min << endl;
    cout << "Maximum = " << max << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    findMinMax(arr, n);
    
    return 0;
}
