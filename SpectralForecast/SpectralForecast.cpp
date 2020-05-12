#include <iomanip>
#include <iostream>
#include <fstream>

#include "Matrix.h"

static constexpr size_t DIMENSIONS = 100;

void writeOutput(const std::vector<double>& r)
{
    std::ofstream f("output.txt");

    for (double val : r)
    {
        f << std::fixed << std::setprecision(8) << val << std::endl;
    }

    std::cout << "Similarity index values can be found in output.txt." << std::endl;
}

int main()
{
    Matrix A, B, P;
    A.populateMatrix(Data::A);
    B.populateMatrix(Data::B);
    P.populateMatrix(Data::P);
    
    std::vector<Matrix> M;

    //Calculate M over the given dimensions
    for (size_t d = 0; d <= DIMENSIONS; ++d)
    {
        M.emplace_back( ( A * (d / A.getMaxElement())) +
                     ( B * ((DIMENSIONS - d) / B.getMaxElement())));
    }

    
    //Product sum squared of P
    const double pProd = productSumSquared(P);

    //Similarity index
    std::vector<double> S;

    for (size_t d = 0; d <= DIMENSIONS; ++d)
        S.push_back( productSumSquared(M[d], P) / ((productSumSquared(M[d]) * pProd)) );

    writeOutput(S);

    std::cout << "Press ENTER to exit...";
    getchar();

    return 0;
}
