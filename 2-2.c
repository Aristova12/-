#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double GetDouble();

/**
 * @brief Вычисляет значение функции y по заданной формуле
 * @param x значение параметра x
 * @param a значение параметра a
 * @return рассчитанное значение
 */
double y(const double x, const double a);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    const double a = 2.0;
	printf("Enter x: ");
    double x = GetDouble();
    printf("y = %lf", y(x, a));
    return 0;

}

double GetDouble(){
    double value = 0.0;
    if (scanf("%lf", &value) != 1){
        printf("Error");
        exit(1);
    }
    return value;

}

double y(const double x, const double a){
    if (x >= 1 && x <= 2){
        return a*pow(x, 2*log(x));
    }
    if (x < 1){
        return 1;
    }
    if (x > 2){
        return exp(a*x)*cos(x);
    }
}




