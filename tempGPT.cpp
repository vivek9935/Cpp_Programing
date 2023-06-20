#include <iostream>
#include <complex>
#include <cmath>
#include <vector>
#include<math.h>
#include<tgmath.h>

using namespace std;

// Function prototypes
void printMatrix(vector<vector<complex<double>>> matrix);
vector<vector<complex<double>>> addMatrices(vector<vector<complex<double>>> matrix1, vector<vector<complex<double>>> matrix2);
vector<vector<complex<double>>> subtractMatrices(vector<vector<complex<double>>> matrix1, vector<vector<complex<double>>> matrix2);
vector<vector<complex<double>>> multiplyMatrices(vector<vector<complex<double>>> matrix1, vector<vector<complex<double>>> matrix2);
vector<vector<complex<double>>> transposeMatrix(vector<vector<complex<double>>> matrix);
complex<double> integrate(complex<double> (*func)(complex<double>), complex<double> a, complex<double> b);
complex<double> differentiate(complex<double> (*func)(complex<double>), complex<double> x);
complex<double> expi(double theta);

int main() {
    // Matrix operations
    vector<vector<complex<double>>> matrix1 {{1, 2}, {3, 4}};
    vector<vector<complex<double>>> matrix2 {{5, 6}, {7, 8}};

    cout << "Matrix 1:\n";
    printMatrix(matrix1);

    cout << "Matrix 2:\n";
    printMatrix(matrix2);

    cout << "Matrix 1 + Matrix 2:\n";
    printMatrix(addMatrices(matrix1, matrix2));

    cout << "Matrix 1 - Matrix 2:\n";
    printMatrix(subtractMatrices(matrix1, matrix2));

    cout << "Matrix 1 * Matrix 2:\n";
    printMatrix(multiplyMatrices(matrix1, matrix2));

    cout << "Transpose of Matrix 1:\n";
    printMatrix(transposeMatrix(matrix1));

    // Integral and differential calculations
    complex<double> a(0, 0), b(1, 0), x(1, 0);
    complex<double> result;

    result = integrate(sin, a, b);
    cout << "Integral of sin(x) from 0 to 1: " << result << endl;

    result = differentiate(exp, x);
    cout << "Derivative of exp(x) at x=1: " << result << endl;

    // Complex operations
    complex<double> z1(1, 2), z2(3, 4);

    cout << "z1 = " << z1 << ", z2 = " << z2 << endl;
    cout << "z1 + z2 = " << z1 + z2 << endl;
    cout << "z1 - z2 = " << z1 - z2 << endl;
    cout << "z1 * z2 = " << z1 * z2 << endl;
    cout << "z1 / z2 = " << z1 / z2 << endl;
    cout << "expi(pi/4) = " << expi(M_PI/4) << endl;

    return 0;
}

// Function definitions

// Prints a matrix
void printMatrix(vector<vector<complex<double>>> matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[0].size(); j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
    cout << endl;
}