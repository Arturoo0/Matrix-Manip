#include "matrix.hpp"
#include <array>
#include <vector>
#pragma once

namespace op {
    bool sameShape(const Matrix &m1, const Matrix&m2);
    void transpose(Matrix &m);
    void scalarMultiplication(Matrix &m, double scalar);
    Matrix add(Matrix &m1, Matrix &m2);
    Matrix subtract(Matrix &m1, Matrix &m2);
    Matrix multiply(Matrix &m1, Matrix &m2);
}