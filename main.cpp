#include "funcs.h"
int main(){

    std::cout << printRange(-10, 3) << "\n";
    std::cout << sumRange(1, 3) << "\n";

    int size = 10;
    int *arr = new int[size]; // allocate array dynamically
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;
    int sum1 = sumArray(arr, size); // Add all elements
    std::cout << "Sum is " << sum1 << std::endl;  // Sum is 43

    delete[] arr;         // deallocate it

    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)

    std::cout << "--------------------------------------" << "\n";

    std::cout << nestedParens("((()))") << std::endl;      // true (1)

    return 0;
}