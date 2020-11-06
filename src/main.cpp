
#include <iostream>
#include <vector>
#include ".././headers/matrix.hpp"
#include ".././headers/operations.hpp"

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
    

    Matrix v1 (vect1);
    Matrix v2 (vect2);

    v1.printMatrix();
    v2.printMatrix();

    std::cout << v1.getShape()[0] << " " << v1.getShape()[1] << std::endl;

    return 0;
}