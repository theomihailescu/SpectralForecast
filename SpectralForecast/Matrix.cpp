#include "Matrix.h"

#include <iostream>
#include <algorithm>
#include <cmath>

Matrix::Matrix(size_t l, size_t c): lines(l), columns(c)
{
    for (size_t line = 0; line < lines; ++line)
        data.emplace_back(std::vector<double>());
}

void Matrix::populateMatrix(const double source[][MAX_COLUMNS])
{
    for (size_t line = 0; line < lines; ++line)
        for (size_t col = 0; col < columns; ++col)
        {
            data[line].emplace_back(source[line][col]);
        }
}

double Matrix::findMaxElement() noexcept
{
    double result = -1.0;

    for (size_t line = 0; line < lines; ++line)
        for (size_t col = 0; col < columns; ++col)
            if (data[line][col] > result)
            {
                result = data[line][col];
            }

    maxElement = result;
    return result;
}

double Matrix::getMaxElement() noexcept
{
    return (maxElement != UNINITIALIZED_MAXELEMENT_VALUE ? maxElement : findMaxElement());
}

std::vector<double>& Matrix::operator[](const size_t index)
{
    return data.at(index);
}

const std::vector<double>& Matrix::operator[](const size_t index) const
{
    return data.at(index);
}

Matrix operator*(const Matrix& lhs, const double rhs)
{
    Matrix res(lhs.lines, lhs.columns);

    for (size_t line = 0; line < lhs.lines; ++line)
    {
        std::transform(lhs[line].begin(), lhs[line].end(), std::back_inserter(res[line]),
                        [rhs](double val) -> double { return val * rhs; });
    }

    return res;
}

Matrix operator+(const Matrix& lhs, const Matrix& rhs)
{
    Matrix res(lhs.lines, lhs.columns);

    for (size_t line = 0; line < lhs.lines; ++line)
        for (size_t col = 0; col < lhs.columns; ++col)
            res[line].emplace_back(lhs[line][col] + rhs[line][col]);

    return res;
}


double productSumSquared(const Matrix& matrix)
{
    double res = 0;
    for (size_t line = 0; line < matrix.lines; ++line)
        for (size_t col = 0; col < matrix.columns; ++col)
            res += (matrix[line][col] * matrix[line][col]);

    return res;
}

double productSumSquared(const Matrix& lhs, const Matrix& rhs)
{
    double res = 0;
    for (size_t line = 0; line < lhs.lines; ++line)
        for (size_t col = 0; col < lhs.columns; ++col)
            res += (lhs[line][col] * rhs[line][col]);

    return std::pow(res, 2);
}
