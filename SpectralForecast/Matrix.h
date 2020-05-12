#pragma once

#include <memory>
#include <vector>

#include "Data.h"

static const size_t DEFAULT_LINES = 10;
static const size_t DEFAULT_COLUMNS = MAX_COLUMNS;
static const double UNINITIALIZED_MAXELEMENT_VALUE = -1.0;

//Input data is assumed to be correct, according to the PDF
class Matrix
{
    size_t lines, columns;
    std::vector< std::vector<double> > data;
    double maxElement = UNINITIALIZED_MAXELEMENT_VALUE;

    double findMaxElement() noexcept;
public:
    Matrix(size_t l = DEFAULT_LINES, size_t c = DEFAULT_COLUMNS);

    void populateMatrix(const double source[][MAX_COLUMNS]);

    double getMaxElement() noexcept;

    std::vector<double>& operator[](const size_t index);
    const std::vector<double>& operator[](const size_t index) const;

    //scalar product
    friend Matrix operator*(const Matrix& lhs, const double rhs);

    //Matrix addition
    friend Matrix operator+(const Matrix& lhs, const Matrix& rhs);

    friend double productSumSquared(const Matrix& matrix);

    friend double productSumSquared(const Matrix& lhs, const Matrix& rhs);
};



