#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

void printArray(const vector<int>& arr, int left, int right) {
    cout << "[";
    for (int i = left; i <= right; ++i) {
        cout << arr[i];
        if (i < right) cout << ", ";
    }
    cout << "]" << endl;
}

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int i = left, j = mid + 1;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= right) temp.push_back(arr[j++]);

    for (int k = 0; k < temp.size(); ++k) {
        arr[left + k] = temp[k];
    }

    cout << "Merging: ";
    printArray(arr, left, right);
}

// Merge sort function
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Split and sort the left half
        mergeSort(arr, left, mid);
        
        // Split and sort the right half
        mergeSort(arr, mid + 1, right);

        // Print the current division
        cout << "Dividing: ";
        printArray(arr, left, right);

        // Merge the two halves
        merge(arr, left, mid, right);
    }
}

int main() {
    vector<int> arr;
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << "\nInitial array: ";
    printArray(arr, 0, arr.size() - 1);

    // Start merge sort
    mergeSort(arr, 0, arr.size() - 1);

    cout << "\nSorted array: ";
    printArray(arr, 0, arr.size() - 1);

    return 0;
}
