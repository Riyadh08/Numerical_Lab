//LU factorization
#include <iostream>
#include <cmath>

using namespace std;

void LU_Decomposition(double A[3][3], double L[3][3], double U[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int k = i; k < 3; k++) {
            double sum = 0;
            for (int j = 0; j < i; j++) {
                sum += (L[i][j] * U[j][k]);
            }
            U[i][k] = A[i][k] - sum;
        }

        for (int k = i; k < 3; k++) {
            if (i == k) {
                L[i][i] = 1;
            }
            else {
            double sum = 0;
            for (int j = 0; j < i; j++) {
                sum += (L[k][j] * U[j][i]);
            }
            L[k][i] = (A[k][i] - sum) / U[i][i];
        }
        }
    }
}

void solveLinearSystem(double L[3][3], double U[3][3], double b[3], double x[3]) {
    double y[3];
    
    // Solve Ly = b
    for (int i = 0; i < 3; i++) {
        double sum = 0;
        for (int j = 0; j < i; j++) {
            sum += L[i][j] * y[j];
        }
        y[i] = b[i] - sum;
    }
    
    // Solve Ux = y
    for (int i = 2; i >= 0; i--) {
        double sum = 0;
        for (int j = i + 1; j < 3; j++) {
            sum += U[i][j] * x[j];
        }
        x[i] = (y[i] - sum) / U[i][i];
    }
}

int main() {
    double A[3][3] = {{3, 1, -2}, {6, 3, 4}, {3, 1, 5}};
    double L[3][3], U[3][3];
    double b[3] = {1, 2, 3};
    double x[3];

    LU_Decomposition(A, L, U);
    solveLinearSystem(L, U, b, x);

    cout << "Solution to the linear system Ax = b:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "x[" << i << "] = " << x[i] << endl;
    }

    return 0;
}
