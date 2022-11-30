#include "funcs.h"
int main(){

    std::cout << printRange(-10, 3) << "\n";
    std::cout << sumRange(1, 3) << "\n";

    int size = 10;

    std::cout << isAlphanumeric("ABCD") << std::endl;        // true (1)

    std::cout << "--------------------------------------" << "\n";

    std::cout << nestedParens("((()))") << std::endl;      // true (1)


    return 0;
}