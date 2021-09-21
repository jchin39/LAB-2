#include <iostream>
#include <string>
using namespace std;
int main() {
    int size;
    bool status = true;
    cout << "Enter the size of your array: ";
    cin >> size;
    int arr[size] = {0};
    int nums;
    if (size <= 0 || size > 10) {
        cout << "ERROR: you entered an incorrect value for the array size!";
        exit(0);
    }
    cout << "Enter the numbers in the array, separated by a space, and press enter: ";
    for ( int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] >= arr[i+1]) {
            if (i == size - 1) {
                break;
            }
            status = false;
            break;
        }
        else {
            status = true;
        }
    }
    if (status == true) {
        cout << "This IS an increasing array!" << endl;
    }
    if (status == false) {
        cout << "This is NOT an increasing array!" << endl;
    }
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
}