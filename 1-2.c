#include <stdio.h>
#include <math.h>
#include <stdlib.h>

/*
* @brief проверяет, что значение больше 0
* @param value - проверяемое значение
*/
void checkValue(const double value);

/*
*@brief находит площадь грани куба по данному ребру
*@param value ребро куба
*@return площадь грани куба
*/
double faceAreaOfACube(const double value);

/*
*@brief рассчитывает площадь полной поверхности куба по данному ребру
*@param ребро куба
*@return площадь полной поверхности куба
*/
double surfaceAreaOfACube(const double value);

/*
*@brief рассчитывает объем куба по данному ребру
*@param ребро куба
*@return объем куба
*/
double cubeVolume(const double value);

/*
* @brief точка входа в программу
* @return возвращает 0, если программа выполненна корректно
*/
int main() {
    double a = 0;
    scanf("%lf", &a);
    checkValue(a);
    printf("Площадь грани куба: %lf\n", faceAreaOfACube(a));
    printf("Площадь полной поверхности куба: %lf\n", surfaceAreaOfACube(a));
    printf("Объём куба: %lf", cubeVolume(a));
    return 0;
}
void checkValue(const double value){
    if (value <= 0){
        printf("Ошибка. Ребро должно быть больше 0");
        exit(1);
    }
}
double faceAreaOfACube(const double value){
    return pow(value, 2);
}
double surfaceAreaOfACube(const double value){
    return faceAreaOfACube(value)*6;
}
double cubeVolume(const double value){
    return pow(value, 3);
}

