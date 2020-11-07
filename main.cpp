
#include <iostream>
#include <vector>
#include "./headers/matrix.hpp"
#include "./headers/operations.hpp"

int main(){
    std::vector<std::vector<double> > vect1 = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    std::vector<std::vector<double> > vect2 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 20}
    };
    
    Matrix m1 (vect1);
    Matrix m2 (vect2);

    std::cout << "Original - - -" << std::endl;
    m1.printMatrix();
    m2.printMatrix(false);
    std::cout << "- - -" << std::endl;

    Matrix m3 = op::multiply(m1, m2);
    m3.printMatrix();

    op::transpose(m3);
    m3.printMatrix();
    return 0;
}