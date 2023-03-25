#include <iostream>
#include "mymath.h"

int main(){
    int number;
    std::cout << "Enter a number : ";
    std::cin >> number;
    std::cout << "Double of "<< number << "is : " << doubler(number);  
    return 0;
}

/* A LOT WORK IN VS CODE TO RUN THIS PROJECT
# g++ -c main.cpp  // Created an object file main.0
# g++ -c mymath.cpp // Created an object file mymath.o
# ar rvs libm.a mymath.o // Creat a linker file libm.a
# g++ -o test main.o mymath.o -l:libm.a // create an executable file test.exe
# ./test.exe // Run the test.exe file
*/
