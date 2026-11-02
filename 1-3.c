#include <stdio.h>

/**
 * @brief Считывает с клавиатуры занчение с плавающей точкой
 * @return Считанное значение
 */
double GetDouble();

/**
 * @brief вычисляет силу тяжести по заданной формуле
 * @param m - масса мешка
 * @param g - ускорение свободного падения
 * @return рассчитанное значение
 */
double Gravity(const double m, const double g);

/**
 * @brief вычисляет вес мешка по заданной формуле
 * @param m - масса мешка
 * @param g - ускорение свободного падения
 * @return рассчитанное значение
 */
double Weight(const double m, const double g);


/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main() {
    const double g = 9.8;
	printf("Enter m: ");
    double m = GetDouble();
    printf("Сила тяжести = %lf\n", Gravity(m, g));
    printf("Вес мешка = %lf", Weight(m, g));
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
double Gravity(const double m, const double g){
    return m*g;
}

double Weight(const double m, const double g){
    return m*g;
}
