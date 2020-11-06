#include ".././headers/matrix.hpp"

Matrix::Matrix(std::vector<std::vector<double>> &vector){
    matrix = vector; 
    computeSize(matrix);
}

std::array<int, 2> Matrix::getShape(){
    std::array<int, 2> shape; 
    shape[0] = rows;
    shape[1] = cols;
    return shape;
}

void Matrix::computeSize(std::vector<std::vector<double>> &vector){
    rows = vector.size();
    if (rows == 0) cols = 0;
    else cols = vector[0].size();
}
        
void Matrix::setRows(int r){
    rows = r;
}

void Matrix::setCols(int c){
    cols = c;
}

int Matrix::getRows(){
    return rows;
}

int Matrix::getCols(){
    return cols;
}

void Matrix::printMatrix(){
    for (int r = 0; r < matrix.size(); r++){
        for (int c = 0; c < matrix[r].size(); c++){
            std::cout << matrix[r][c] << " "; 
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}