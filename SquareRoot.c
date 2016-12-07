#include <stdio.h>

int main() {

 int s,n;
 double x,d;

 printf("Enter an integer to find its root: \n");
 scanf("%d",&n);

if (n>=0){
  for (s= 1; s*s <= n; s++);
    s--;

    for (d = 0.001; d < 1.0; d+=0.001){
      x = (double)s+d;
      if ((x*x)>(double)n){
        x = x-0.001;
        break;
      }
    }
    printf("Square Root of %d is: %.3f\n",n,x );
  }
  else{
    printf("Square Root of %d is: i [imaginary]",n );
  }

  return 0;
}
