 
#include <stdio.h>
 
int main() {
  //Write your code here. 
int number,guess,chance=0,x=1;
int inputType;
 printf("number",inputType);
scanf("%d",&inputType);
if (inputType == 1) {
 printf("next",number);
    scanf("%d", &number);
} 
 
while(1){
 printf("guess",guess);
  scanf("%d",&guess);
  chance++;
  if(number>guess)
  printf("===>Number to be guessed is higher than %d\n",guess);
else if(number<guess)
  printf("===>Number to be guessed is lesser than %d\n",guess);
else if(number==guess)
{
printf("===>Guessed correctly the number %d in %d chances",number,chance);
break;
}
if(chance==2)
{
printf("===>You were not able to guess %d in 20 chances",number);
 break;
}
 else
 printf("===>Chances left : %d\n",(20-chance));
}
  return 0;
}
 

