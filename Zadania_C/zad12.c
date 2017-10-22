#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int abs();
double pow();

int main()
{
  double a;



        printf("Podaj liczbe :\n");
        scanf("%lf",&a);
double liczba_odwrotna=1/a;
if(a=0)
exit (EXIT_FAILURE);
else
{
printf("Pierwiastek z liczby to : %lf\n",sqrt(a));
printf("Odwrotnosc tej liczby to %lf\n",liczba_odwrotna);
}

    return 0;
}
