//Quadractic Equation

 #include<stdio.h>
 #include<math.h>

int main() {
   float a,b,c,d,root1,root2;

   printf("Enter coeffecients of a Quadractic Equation in descending order of power:\n");
   scanf("%f%f%f",&a,&b,&c);

   d = (b*b) - (4*a*c);
   
if (a==0) {
  printf("==ERROR==\n");
}
else{
  if (d>0.0) {
     printf("Roots are real and not equal\n");
     root1 = -b + sqrt(d)/(2*a);
     root2 = -b + sqrt(d)/(2*a);
     printf("First Root: %f\n",root1);
     printf("Second Root: %f\n",root2);
   }
   else if (d==0) {
     printf("Roots are real and equal\n");
     root1 = -b/(2*a);
     printf("Root: %f\n",root1);
   }
   else {
     printf("Roots are imaginary and not equal\n");
     root1 = -b/(2*a);
     root2 = sqrt(-d)/(2*a);
     printf("First Root: %f+i%f\n",root1,root2);
     printf("Second Root: %f-i%f\n",root1,root2);
   }
 }
   return 0;
 }
