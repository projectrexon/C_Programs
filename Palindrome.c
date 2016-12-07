#include<stdio.h>

int main(){

  int num,a,dig,rev=0;

  printf("Enter a number to check wether it is a palindrome or not: \n");
  scanf("%d",&num);

  a = num;

  while (num!=0) {
    dig=num%10;
    rev=rev*10+dig;
    num=num/10;
  }

  if (rev==0) {
    printf("Given number %d is a palindrome\n",a);
  }
  else{
      printf("Given number %d is not a palindrome\n",a);
  }

  return 0;
}
