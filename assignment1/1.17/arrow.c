#include <stdio.h>

int main(){

  void printArrow();
  printArrow(0,1);

    return 0;
}

void printArrow(int num1, int num2){
   for(int i = 0; i < 5; i++){printf("%c",' ');} printf("%d\n",num2); 
   for(int i = 0; i < 5; i++){printf("%c",' ');} for(int i = 0; i < 2; i++){ printf("%d", num2);}; printf("\n"); 
   for(int i = 0; i < 5; i++){printf("%d", num1);} for(int i = 0; i < 3; i++){ printf("%d", num2);}; printf("\n");
   for(int i = 0; i < 5; i++){printf("%d", num1);} for(int i = 0; i < 4; i++){ printf("%d", num2);}; printf("\n"); 
   for(int i = 0; i < 5; i++){printf("%d", num1);} for(int i = 0; i < 3; i++){ printf("%d", num2);}; printf("\n");
   for(int i = 0; i < 5; i++){printf("%c",' ');} for(int i = 0; i < 2; i++){ printf("%d", num2);}; printf("\n"); 
   for(int i = 0; i < 5; i++){printf("%c",' ');} printf("%d\n", num2); 
  
}
