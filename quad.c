#include<stdio.h>
#include<math.h>

int main() {
  double a, b, c, x1, x2, d;
  
  printf("Enter a, b, c\n");
  scanf("%lf%lf%lf",&a,&b,&c);
  d = b*b - 4*a*c;
  
  if(d < 0) {
    double realPart, imagPart;
    realPart = -b/2*a;
    imagPart = sqrt(-d)/2*a;
    
    printf("Imaginary Roots\n");
    printf("Real part is %lf and imaginary part is %lf", realPart, imagPart);
  } else if (d == 0) {
    x1 = x2 = -b / (2*a);
    printf("Real and equal roots\n");
    printf("Roots are %lf and %lf\n", x1, x2);
  } else {
    x1 = (-b+sqrt(d)) / 2*a;
    x2 = (-b-sqrt(d)) / 2*a;
    printf("Real and unequal roots\n");
    printf("Roots are %lf and %lf\n", x1, x2);
  }
}


