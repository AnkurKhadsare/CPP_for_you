#include <iostream>
/*
# Using Bool as flag insted of a break statement is a good practice
*/

int main(){
    bool flag= false;
    int i = 1,rsum = 1,i_1 = 1;

    while (!flag){
        std::cout << rsum<<std::endl;
        rsum =i+i_1;
        i_1=i;
        i = rsum;
        if(rsum>100){
            flag = true;
        }
    }
    return 0;
}