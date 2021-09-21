#include <iostream>
#include <string>
using namespace std;
int main() {
    int size;
    bool status = true;
    cout << "Enter the size of your array: ";
    cin >> size;
    int arr[size] = {0};
    //Setting acceptable array size from anywhere between 1 and 10
    if (size <= 0 || size > 10) {
        cout << "ERROR: you entered an incorrect value for the array size!";
        exit(0);
    }
    //funnel in the values one by one to the array. if a cin only reads the first value then it needs to input them one by one.
    cout << "Enter the numbers in the array, separated by a space, and press enter: ";
    for ( int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    //check whether or not the the array is increasing or not. Comparing the current interval of i to the next one in the array
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
    //print the array
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
}