
#include "operations.hpp"

namespace op {
    
    Matrix add(Matrix &m1, Matrix &m2){
        std::vector<std::vector<double> > vec; 
        if (m1.getRows() != m2.getRows() || m1.getCols() != m2.getCols()){
            return Matrix(vec);
        }

        std::cout << m1.getRows() << " " << m2.getRows() << std::endl;
        for (int r = 0; r < m1.getRows(); r++){
            std::vector<double> newCol;
            for (int c = 0; c < m1.getCols(); c++){
                newCol.push_back(m1.matrix[r][c] + m2.matrix[r][c]);
            }
            vec.push_back(newCol);
        }
        return Matrix(vec);
    }
}
