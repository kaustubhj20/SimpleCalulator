#include <stdio.h>
int add();
int subtract();
int multiply();
int divide();
int main(){
 int a,b,operation;
 float c;
 printf("Enter two numbers :");
 scanf("%d %d",&a,&b);
 printf("List of operations:\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n");
 printf("\nEnter the operation number:");
 scanf("%d",&operation);
 switch(operation){
   case 1:c=add(a,b);
          printf("Sum of numbers is %f",c);
          break;
   case 2: c=subtract(a,b);
           printf("Difference between given two numbers is %f",c);
           break;
   case 3: c=multiply(a,b);
           printf("Product of given two numbers is %f",c);
           break;
   case 4: c=divide(a,b);
           printf("Quotitient obtained after division of given numbers is %f",c);
           break;
   default : printf("Invalid Case!");
 }
  return 0;
}
 int add(int num1,int num2){
   int sum;
   sum=num1+num2;
   return sum;
 }
 int subtract(int num1,int num2){
   int min;
   min=num1-num2;
   return min;
 }
 int multiply(int num1,int num2){
   int multiple;
   multiple=num1*num2;
   return multiple;
 }
 int divide(int num1,int num2){
   int div;
   div=num1+num2;
   return div;
 }