
#include <vector>
#include <iostream>

class Matrix {
    private:
        int rows, cols;
        std::vector<std::vector<double> > matrix;
        void computeSize(std::vector<std::vector<double> > &vector);
    public:
        Matrix(std::vector<std::vector<double> > &vector);
        void setRows(int r);
        void setCols(int c);
        int getRows();
        int getCols();
        void printMatrix();
};