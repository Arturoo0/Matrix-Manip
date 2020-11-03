
#include <iostream>
#include <vector>
#include "matrix.hpp"

int main(){
    std::vector<std::vector<double> > s;
    Matrix test (s);
    std::cout << test.getRows() << " " << test.getCols() << std::endl;
    test.printMatrix();
    return 0;
}