#include<stdio.h>

int getSum(int n){
  int i;
  int sum= 0;
  if(i <= 0 )
    return 1;

  for(i=1;i<=n;i++){
    if(n % i != 0){
      sum = sum + i;
    }  
  }
  return sum;
}

int main(){
  int n;
  printf("\nWelcome User\n");
  printf("\nEnter a number  ");
  scanf("%d" , &n);
  printf("\nThe sum of non factoral of given number %d is %d\n" , n , getSum(n));
  
  return 0;
}
