#include<stdio.h>

int main(int argc, char *argsv[]){
  int num,b,pall=0,originalNum;
  printf("Enter the digits");
  scanf("%d,&num);
  originalNum=num;
  while(a!=0){
    pall=pall*10+(num%10);
    num=num/10;
  }
  if(originalNum==num){
    printf("%d is pallindrome!",originalNum);
  }
  else{
    printf("%d is not pallindrome number",originalNum);
  }
  return 0;
}
  
