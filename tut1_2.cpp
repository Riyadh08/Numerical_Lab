#include <iostream>
#include <cmath>

using namespace std;

const double epsilon = 0.00001;
const int maxIterations = 1000;

int main() {
    double x1 = 0.0, y1 = 0.0, z1 = 0.0;
    double x2 = 3.15, y2 = 3.54, z2 = 1.9131;
    double xn = 0, yn = 0, zn = 0;
    int iterations = 0;

    while (iterations < maxIterations) {
        xn = (85 - 6 * y2 + z2) / 27.0;
        yn = (72 - 6 * xn - 2 * z2) / 15.0;
        zn = (110 - xn - yn) / 54.0;

        if (abs(xn - x2) < epsilon && abs(yn - y2) < epsilon && abs(zn - z2) < epsilon) {
            // Converged
            cout << "Converged after " << iterations << " iterations." << endl;
            cout << "x = " << xn << ", y = " << yn << ", z = " << zn << endl;
            break;
        }

        x2 = xn;
        y2 = yn;
        z2 = zn;
        iterations++;
    }

    if (iterations == maxIterations) {
        cout << "The Gauss-Seidel method did not converge within " << maxIterations << " iterations." << endl;
    }

    return 0;
}
