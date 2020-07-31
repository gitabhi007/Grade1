#include <stdio.h>
#include <stdlib.h>
int main()
{
 int mark;
 printf("Enyer your mark between 0 to 100");
 scanf("%d",&mark);
 if(mark>=85)
    printf("grade is A");
 else if(mark>=70)
    printf("grade is B");
 else if(mark>=55)
    printf("grade is C");
 else if(mark>=40)
    printf("grade is D");
 else
    printf("grade is F");
  return 0;        
 }
    