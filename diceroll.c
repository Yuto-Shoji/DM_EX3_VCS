#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
  char enter1,enter2;
  int i;
  int input1,input2;
<<<<<<< HEAD
  int total;
=======
  char name[20];

  printf("What is your name?\n> ");
  scanf("%s",name);
  printf("Hello, %s!\n\n",name);

>>>>>>> experimental
  
  srand((unsigned)time(NULL));

  printf("Rolling the dice...\n");
<<<<<<< HEAD
=======
  printf("Press enter key...");
>>>>>>> experimental
  scanf("%c",&enter1);
  scanf("%c",&enter2);
  if(enter1 == '\n' && enter2 == '\n'){
    for(i=0;i<1;i++){
      input1 = rand() % 6 + 1;
      input2 = rand() % 6 + 1;
      printf("Die 1: %d\n",input1);
      printf("Die 2: %d\n",input2);
    }
    total = input1+input2;
    printf("Total Value: %d\n",total);
    if(total >= 8)printf("You won\n");
    else printf("You lost\n");
	       
  }
  else printf("Press enter key\n");

  return 0;
}
