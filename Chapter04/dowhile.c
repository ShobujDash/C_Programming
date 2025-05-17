#include<stdio.h>

int main(){

  // int i = 1;
  // do{
  //   printf("%d \n", i);
  //   i++;
  // } while (i <= 5);

  int n;
  do{
    printf("enter a number : ");
    scanf("%d", &n);
    printf("%d \n", n);

    if(n%2 != 0){
      break;
    }
  } while (1);
  printf("thank you");

  return 0;
}