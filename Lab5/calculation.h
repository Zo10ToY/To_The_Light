﻿// Розробник програми Косих Анатолiй К-13, варiант 162

const double a0 = -0.2;
const double b0 = 0.2;

double f_162(double); 
// обчислює значення f(x) = (1−4x)^(-3/2) за своїм аргументом

double S_162(double, double);
// обчислює значення S(x) -- суму ((2n+1)!/(n!)^2)*x^n за n, прямуючих від 0 до + нескінченності за першим аргументом
// другий аргумент -- точність обчислення суми