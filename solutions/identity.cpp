#include <iostream>
#include <vector>

using RealVec = std::vector<double>;
using RealMatrix = std::vector<RealVec>;

int main() {

    int N{0};

    std::cout << "Enter the size of the square matrix: ";
    std::cin >> N;

    RealMatrix I{};

    for (int i=0; i < N; ++i) {

        RealVec row(N, 0.0);
        row[i] = 1.0;

        I.push_back(row);

    }

    for (auto row : I) {
        for (auto col : row) {
            std::cout << col << " ";
        }
        std::cout << std::endl;
    }

}