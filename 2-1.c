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
double s(double side1, double side2);

/**
 * @brief Вычисляет площать прямоугольного треугольника
 * @param side1 - значение катета 1
 * @param side2 - значение катета 2
 * @param side3 - значение гипотенузы
 * @return Рассчитанное значение
 */
double p(double side1, double side2, double side3);

/**
 * @brief Проверяет, что катет - положительное число
 * @param side - считанное значение катета
 */
void checkSide(double side);

/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main(){
    double side1 = getDouble();
    double side2 = getDouble();
    checkSide(side1);
    checkSide(side2);
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

void checkSide(double side){
    if (side <= 0){
        printf("Ошибка");
        exit(1);
    } 
}

double p(double side1, double side2, double side3){
    return side1+side2+side3;
}

double s(double side1, double side2){
    return  side1*side2/2;
}
