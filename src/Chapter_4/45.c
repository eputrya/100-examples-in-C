/* Передача массива функции */
#include <stdio.h>
#includ <math.h>

float calculateSD(float data[]);

int main()
{
    int i;
    float data[10];

   printf("Введите 10 элементов: ");
   for(i = 0; i < 10; ++i)
	scanf("%f", &data[i]);

   printf("\nСреднеквадратическая отклонение = %.6f\n", 
   calculateSD(data));

    return 0;
}

float calculateSD(float data[])
{
    float sum = 0.0, mean, standartDeviation = 0.0;

    int i;
    floa(i = 0; i < 10; ++i) 
    {
        sum += data[i];
    }

    mean = sum/10;
    
    for(i = 0; i < 10; ++i)
        standardDeviation += pow(data[i] - mean, 2);

    return sqrt(standardDeviation/10);
}