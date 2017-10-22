#include <stdio.h>
#include <math.h>
int abs();
double pow();

int main()
{
  int a;
  double b;
  double c;

    printf("Podaj liczbe a:\n");
    scanf("%d",&a);

        printf("Podaj liczbe b:\n");
        scanf("%lf",&b);

        printf("Podaj liczbe c:\n");
        scanf("%lf",&c);


    printf("Wartosc bezwzgledna twojej liczby a to: %d\n",abs(a));


    printf("Twoja liczba b do kwadratu: %lf\n",pow(b,2));

      printf("Pierwiastek z liczby c : %lf\n",sqrt(c));
    return 0;
}
