 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
 #include <unistd.h>
 
 int main()
{
  
 int randomValue1,randomValue2,i,sum1 = 0,sum2=0;
 
 srand(time(NULL));
 printf ("Welcome to the Dice game\n Try your luck \n Created by Abhinav Mishra \n");

 for(i=1;i<=5;i++)
 {
   randomValue1 = 1;
   randomValue2 = 1;
   randomValue1 = rand() % 6 + 1;
   randomValue2 = rand() % 6 + 1;
   
   printf("Rolling a dice for Abhinav ........\n");
 
   usleep(2000000);
   
   printf("%d\n",randomValue1);
   
   sum1 = sum1+ randomValue1;
   
   printf("Rolling a dice for Computer.......\n");
 
   usleep(2000000);
   
   printf("%d\n",randomValue2);
   
   sum2= sum2 + randomValue2;
  
  }
  

  printf("Total score of Abhinav = %d\n",sum1);
  printf("\n\n");
  
  printf("Total score of computer = %d\n",sum2);
  printf("\n\n");
  
  
  if (sum1>sum2)
  {printf("\n\nCongratulations🎉🎊🎉🎊 Abhinav wins 🥳🥳🥳 🥳🥳🥳 \n");}
  
  else if(sum1<sum2)
  {printf("\n sorry Computer wins💻💻\n\n better luck next time👍👍");}
  
  else
  {printf("\n\nHahaha😅😄😄 its Draw\n");}
 return 0;
 
 }
 
 
  
  
  
  
 
   
 