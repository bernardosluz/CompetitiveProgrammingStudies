// coef_binomial_recursive.cpp

#include <iostream>
using namespace std;

int binomialCoeff(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }
    return binomialCoeff(n - 1, k - 1) + binomialCoeff(n - 1, k);
}

int main() {
    int n = 5, k = 2;
    cout << "Coeficiente binomial de " << n << " escolhe " << k << " é: " << binomialCoeff(n, k) << endl;
    return 0;
}
