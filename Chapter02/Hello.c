# include<stdio.h>
# include<math.h>

int main(){

  // printf("hello world \n");

  //  Arithmetic Instructions
  // int a = 1, b = 2;
  // int sum = a + b;
  // int multiply = a * b;
  // int c = 2;
  // int power = pow(b, c);

  // printf("%d", power);

  int x;
  printf("enter a number : ");
  scanf("%d", &x);
  printf("%d", x % 2 == 0);

  return 0;
}

//  Instructions
// control Instructions
// Used to determine flow of program
// a. Sequence Control
// b. Decision Control 
// c. Loop Control 
// d. Case Control


//  Operators
// a. Arithmetic Operators (+,-,* ,/,%)
// b. Relations Operators (== , < ,<= , > , >=, !=)
// c. Logical Operators (|| , && , ! )
// d. Bitwise Operators
// e. Assignment Operators (= , +=, -=, *= , /=, %=)
// f. Ternary Operators