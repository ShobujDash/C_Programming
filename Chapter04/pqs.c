#include<stdio.h>

int main(){

  // int n;
  // printf("enter number : ");
  // scanf("%d", &n);

  // int sum = 0;
  // for (int i = 1; i <= n; i++){
  //   sum += i; // sum = sum + i
  // }
  // printf("Sum is %d", sum);


  // Print the table of a number input by the user.
  // int number;
  // printf("enter number : ");
  // scanf("%d", &number);

  // for (int i = 1; i <= 10;i++){
  //   printf("%d * %d = %d \n", number , i , number * i);
  // }


  //  Print the fectorial of a number n.
  int n;
  printf("enter a number : ");
  scanf("%d", &n);

  int fact = 1;
  for (int i = 1; i<=n; i++){
    fact = fact * i;
  }

  printf("final factorial is %d", fact);

  return 0;
}