#include <iostream>
using namespace std;

#define MAX 5

int getMin(int arr[], int size) {
    int min = arr[0];
    for (int i=0; i<size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int getMax(int *arr, int size) {
    int max = arr[0];
    for (int i=0; i<size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {

    int arr[MAX];

    for (int i = 0; i < MAX; i++) {
        cout << "arr["<<i+1<<"] = "; cin >> arr[i];
    }

    cout << "Our array is: ";
    for (int i = 0; i < MAX; i++) {
        if(i != 0) cout << ", ";
        cout << arr[i];
    } cout << endl;

    int minNum = getMin(arr, MAX);
    int maxNum = getMax(arr, MAX);

    cout << "Min: " << minNum << endl;
    cout << "Max: " << maxNum << endl;

    return 0;
}
