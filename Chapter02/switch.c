#include<stdio.h>

int main(){

  int day;
  printf("enter day(1,7) : ");
  scanf("%d", &day);

  switch (day){
  case 1:
    printf("Sat \n");
    break;
  case 2:
    printf("Sun \n");
    break;
  case 3:
    printf("Mon \n");
    break;
  case 4:
    printf("Tues \n");
    break;
  case 5:
    printf("Thus \n");
    break;
  case 6:
    printf("Wed \n");
    break;
  case 7:
    printf("Fri \n");
    break;

  
  default:
    printf("Not a valid day");
    break;
  }



  return 0;
}