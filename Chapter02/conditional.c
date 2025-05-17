#include<stdio.h>

// Conditional Statements 
// 1. if else 
// 2. switch 


int main(){

  // int age;
  // printf("enter age : ");
  // scanf("%d", &age);

  // if (age > 18){
  //   printf("adult \n");
  //   printf("thay can vote \n");
  //   printf("thay can drive \n");
  // }else{
  //   printf("not adult \n");
  // }


  // Ternay
  // int age;
  // printf("enter age : ");
  // scanf("%d", &age);

  // age >= 18 ? printf("they can vote. \n") : printf("not adult \n");




  //  nested
  int number;
  printf("enter number : ");
  scanf("%d", &number);

  if(number >= 0){
    printf("Positive \n");

    if (number % 2 == 0){
      printf("enver \n");
    }else{
      printf("Odd \n");
    }
  }else{
    printf("nagetive number \n");
  }

  int marks;
  printf("enter marks : ");
  scanf("%d", &marks);
  if(marks > 90){
    printf("A++");
  }else if (marks >= 80 && marks < 90){
    printf("A+");
  }else if (marks >= 70 && marks < 80){
    printf("A");
  }else if (marks >= 80 && marks < 60){
    printf("A-");
  }else if (marks >= 50 && marks < 60){
    printf("B");
  }else if (marks >= 40 && marks < 50){
    printf("C");
  }else{
    printf("F");
  }
  

  return 0;
}