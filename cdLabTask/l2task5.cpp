#include <iostream>
using namespace std;

void avg(int arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++){
        sum = sum+ arr[i];
    }
       double avg = sum / n;
        cout << "Average = " << avg << endl;

}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    avg(arr,n);
    return 0;
}
