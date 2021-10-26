#include <iostream>
#include <cmath>


double f(double x) {
    return sin(100 * x) * exp(-x * x) * cos(2 * x);
}
int main() {
    int i;
    double Integral;
    double a = 0.0, b = 3.0;
    double h = 0.001;
    double n;
    n = (b - a) / h;
    Integral = h * (f(a) + f(b)) / 6.0;
    for (i = 1; i <= n; i++)
        Integral = Integral + 4.0 / 6.0 * h * f(a + h * (i - 0.5));
    for (i = 1; i <= n - 1; i++)
        Integral = Integral + 2.0 / 6.0 * h * f(a + h * i);
    std::cout << "I = " << Integral << "\n";

}