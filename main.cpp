#include <iostream>
#include "taskfunctions.h"

int main() {
    std::cout << "box(3,4):" <<std::endl;
    std::cout << box(3,4) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "box(0,0)" << std::endl;
    std::cout << box(0,0) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "box(0,2)" << std::endl;
    std::cout << box(0,2) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "box(2,0)" << std::endl;
    std::cout << box(2,0) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "box(1,1)" << std::endl;
    std::cout << box(1,1) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "box(20,1)" << std::endl;
    std::cout << box(20,1) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "box(1,20)" << std::endl;
    std::cout << box(1,20) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(11,6)" << std::endl;
    std::cout << checkerboard(11,6) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(11,7)" << std::endl;
    std::cout << checkerboard(11,7) << std::endl;
    std::cout << "\n------------------\n"; 

     std::cout << "checkerboard(12,7)" << std::endl;
    std::cout << checkerboard(12,7) << std::endl;
    std::cout << "\n------------------\n"; 

     std::cout << "checkerboard(12,6)" << std::endl;
    std::cout << checkerboard(12,6) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(0,0)" << std::endl;
    std::cout << checkerboard(0,0) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(0,2)" << std::endl;
    std::cout << checkerboard(0,2) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(2,0)" << std::endl;
    std::cout << checkerboard(2,0) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(1,1)" << std::endl;
    std::cout << checkerboard(1,1) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(20,1)" << std::endl;
    std::cout << checkerboard(20,1) << std::endl;
    std::cout << "\n------------------\n"; 

    std::cout << "checkerboard(1,20)" << std::endl;
    std::cout << checkerboard(1,20) << std::endl;
    std::cout << "\n------------------\n"; 
    return 0;
}