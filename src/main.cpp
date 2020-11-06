
#include <iostream>
#include <vector>
#include ".././headers/matrix.hpp"
#include ".././headers/operations.hpp"

int main(){

    std::vector<std::vector<double> > vect1 = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
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

    Matrix v3 = op::add(v1, v2);
    v3.printMatrix();
 
    Matrix v4 = op::subtract(v1, v2);
    v4.printMatrix();

    return 0;
}