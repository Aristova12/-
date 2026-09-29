#include <stdio.h>
#include <math.h>

/*
* @brief рассчитывает функцию A по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @param z - значение параметра z
* @return рассчитанное значение
*/
double getA(const double x, const double y, const double z);

/*
* @brief рассчитывает функцию B по заданной формуле
* @param x - значение параметра x
* @param y - значение параметра y
* @param z - значение параметра z
* @return рассчитанное значение
*/
double getB(const double x, const double y, const double z);


/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполнена корректно
*/
int main() {
    const X = 1.825;
    const Y = 18.225;
    const Z = -3.298;
    printf("a = %lf\n", getA(X, Y, Z));
    printf("b = %lf\n", getB(X, Y, Z));
    return 0;
}
double getA(const double x, const double y, const double z){
    return pow(x, x/y) - pow(y/x, 1./3);
}
double getB(const double x, const double y, const double z){
    return (y-x) + (((y-z)/(y-x))/3 + (pow(z, 2)/5));
}

