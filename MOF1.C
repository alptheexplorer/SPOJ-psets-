#include<stdio.h>
#include<stdlib.h>

// getting input from user as cd argument

int main(int argc,char* argv[]){


  int i = 0;
  int numbers[argc -1];
  for(i = 1;i<argc;i++){
    numbers[i] = atoi(argv[i]);
  }

  for(i = 1;i<argc;i++){
    printf(" You entered: %d \n",numbers[i]);
  }

  for(i = 1;i<argc;i++){
    if(numbers[i-1] < numbers[i]){
      printf("%d \n",numbers[i]);
    }

  }



}
