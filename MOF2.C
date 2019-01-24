#include<stdlib.h>
#include<stdio.h>

int main(int argc,char*argv[]){
  // declaration of neccesary variables
  int i,j;
  int temp;
  int numbers[argc-1];

  printf("Input: \n");

  for(i=1;i<=argc-1;i++){
    numbers[i] = atoi(argv[i]);
    printf("%d \n",numbers[i]);
  }


  printf("Output: \n");

  for(i=0;i<=argc-1;i++){
    for(j=1;j<=(argc-i-1);j++){
      if(numbers[j]>numbers[j+1]){
        temp = numbers[j];
        numbers[j]=numbers[j+1];
        numbers[j+1]=temp;
      }
      }
    }

  i = 1;
    do{
      printf("%d \n",numbers[i]);
      i++;
    }while(i<=argc && numbers[i] != 42);

    return 0;

}
