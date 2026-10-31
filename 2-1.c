#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();

/**
 * @brief Вычисляет площать прямоугольного треугольника
 * @param side1 - значение катета 1
 * @param side2 - значение катета 2
 * @return Рассчитанное значение
 */
double s(const double side1, const double side2);

/**
 * @brief Вычисляет площать прямоугольного треугольника
 * @param side1 - значение катета 1
 * @param side2 - значение катета 2
 * @param side3 - значение гипотенузы
 * @return Рассчитанное значение
 */
double p(const double side1, const double side2, const double side3);

/**
 * @brief Проверяет, что катет - положительное число
 * @param side - считанное значение катета
 */
void checkSide(const double side1, const double side2);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main(){
    double side1 = getDouble();
    double side2 = getDouble();
    checkSide(side1, side2);
    double side3 = sqrt(pow(side1, 2) + pow(side2, 2));
    printf("Периметр = %lf\n", p(side1, side2, side3));
    printf("Площадь = %lf", s(side1, side2));
    return 0;
}

double getDouble(){
    double side = 0.0;
    if (scanf("%lf",&side) != 1)
        {
            printf("Error");
            exit(1);
        }
    return side;
}

void checkSide(const double side1, const double side2){
    if (side1 <= 0 || side2 <= 0){
        printf("Ошибка");
        exit(1);
    } 
}

double p(const double side1, const double side2, const double side3){
    return side1+side2+side3;
}

double s(const double side1, const double side2){
    return  side1*side2/2;
}
