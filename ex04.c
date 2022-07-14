#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, n, cnt1=0, cnt2=0;

  srand((unsigned int)time(NULL));
  
  printf("Tossing a coin...\n");
  
  for(i=0; i<3; i++) {
    printf("Round %d: ", i+1);
    n = rand() ;
    if(n%2==0) {
      printf("Heads\n");
      cnt1++;
    }else{
      printf("Tails\n");
      cnt2++;
    }
  }
  
  printf("Heads: %d, Tails: %d\n", cnt1, cnt2);
  
  if(cnt1>cnt2) {
    printf("You won!\n");
  } else {
    printf("You lose!\n");
  }
  
  return 0;
}
