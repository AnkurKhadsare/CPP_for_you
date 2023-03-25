#include <iostream>
#include <string>
/*
Adding strings example
 -- Using #include <string>
*/
// using namespace std;

int main(){
    std::string first_string,second_string,result_string;
    first_string = "Ankur";
    second_string = "Khadsare";
    result_string = first_string+ " "+ second_string;
    // Printing the output
    std::cout << result_string << std::endl;
    std::cout << first_string+second_string << std::endl;

    return 0;
}