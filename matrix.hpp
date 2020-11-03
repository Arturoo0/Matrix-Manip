#include <vector>
#include <iostream>
#pragma once


class Matrix {
    private:
        int rows, cols;
        void computeSize(std::vector<std::vector<double> > &vector);
    public:
        Matrix(std::vector<std::vector<double> > &vector);
        std::vector<std::vector<double> > matrix;
        void setRows(int r);
        void setCols(int c);
        int getRows();
        int getCols();
        void printMatrix();
};