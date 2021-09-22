#include <iostream>
#include <string>
using namespace std;
int main() {
    // initializing size and counters 
    int x, row = 1, counter = 0;
    cout << "Enter the size of a 2D array: ";
    cin >> x;
    // check validity of array size
    if (x > 10) {
        cout << "ERROR: your array is too large! Enter 1 to 10." << endl;
        exit(0);
    }
    if (x <= 1) {
        cout << "ERROR: You entered an incorrect value for the array size" << endl;
        exit(0);
    }
    // initializing array 
    int Array[x][x];
    // funneling in array values
    for (int i = 0; i < x; i++) {
        cout << "Enter the values in the array for row "<< row <<", separated by a space, and press enter: ";
        row++;
        for (int j = 0; j < x; j++) {
            cin >> Array[i][j];
            //checking for negative values
            if (Array[i][j] < 0) {
                counter++;
            } 
        }
    
    }
    //conclusion
    if (counter > 0) {
        cout << "There are " << counter << " negative values!" << endl;
    }   
    else {
        cout << "All values are non-negative!" << endl;
    }
}