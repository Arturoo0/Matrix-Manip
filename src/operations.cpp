
#include ".././headers/operations.hpp"

namespace op {

    bool sameShape(Matrix &m1, Matrix &m2){
        if (m1.getRows() != m2.getRows() || m1.getCols() != m2.getCols()) return false; 
        return true;
    }

    bool isDefined(std::array<int, 2> m1, std::array<int, 2> m2){
        return (m1[1] == m2[0]) ? true : false;
    }

    Matrix addOrSubtract(Matrix &m1, Matrix &m2, char operation){
        std::vector<std::vector<double>> vec; 
        if (sameShape(m1, m2) == false) return Matrix(vec);
        for (int r = 0; r < m1.getRows(); r++){
            std::vector<double> newCol;
            for (int c = 0; c < m1.getCols(); c++){
                double compute = (operation == '+') ? m1.matrix[r][c] + m2.matrix[r][c] : m1.matrix[r][c] - m2.matrix[r][c];
                newCol.push_back(compute);
            }
            vec.push_back(newCol);
        }
        return Matrix(vec);
    }

    Matrix multiply(Matrix &m1, Matrix &m2){
        std::vector<std::vector<double>> vec; 
        if (!isDefined(m1.getShape(), m2.getShape())) return Matrix(vec);
        std::cout << "passed" << std::endl;
        for (int r = 0; r < m1.matrix.size(); r++){
            std::vector<double> newCol;
            float sum = 0;
            for (int c = 0; c < m1.matrix[r].size(); c++){
                sum += (m1.matrix[r][c] * m2.matrix[c][r]);
            }
            vec.push_back(newCol);
        }
        return Matrix(vec);
    }

    Matrix add(Matrix &m1, Matrix &m2){
        return addOrSubtract(m1, m2, '+');
    }

    Matrix subtract(Matrix &m1, Matrix &m2){
        return addOrSubtract(m1, m2, '-');
    }

}
