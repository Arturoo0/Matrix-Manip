#include "matrix.hpp"
#include <vector>
#pragma once


namespace op {
    bool sameShape(Matrix &m1, Matrix&m2);
    Matrix add(Matrix &m1, Matrix &m2);
    Matrix subtract(Matrix &m1, Matrix &m2);
}