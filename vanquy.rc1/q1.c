#include<stdio.h>
int main(){
  int num1, num2, result;
  char choice;

  printf("Enter an expression (+ - * /): ");
  scanf("%d %c %d", &num1, &choice, &num2);

  switch (choice) {
    case '+':
      result = num1 + num2; printf("Result:%d",result);
      break;
    case'-':
    	result = num1 - num2; printf("Result:%d",result);
    	break;
    case '*':
      result = num1 * num2; printf("Result:%",result);
      break;
    case '/':
      if (num2 == 0) { printf("Invalid");
        
      } else {
        result = num1 / num2; printf("Result:%d",result);
      }
      break;
    default:
      printf("Invalid operator!\n");
     
  }

  

  return 0;
}

