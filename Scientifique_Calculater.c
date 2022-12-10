/*
Tarchi Khaled    Group 04

scientific calculator project using C language.
 In this mini-project, I tried to use all my previous knowledge such as:
 Conditional structures (if, switch), loops (for, do while),
 Functions and Procedures and Recursive......ex.
*/


#include <stdio.h>
#include <stdlib.h>	
#include <math.h>
#define PI 3.141592654


void red(){
  printf("\033[1;46m");
}
	
void red1(){
  printf("\033[1;31m");
}	

void yellow(){
  printf("\033[1;33m");
}
	
	
void green(){
  printf("\033[0;32m");
}
	
void bleu(){
  printf("\033[0;34m");
}
		
	
	
	
void Purple(){
  printf(" \033[0;47m");
}
		
void reset(){
  printf("\033[0m");
}	
	


void Menu(void){
	
	
red();
printf("\n●==========|    CALCUlATOR   "
       " |===========●\n\n");
red();	
	
	red();
printf("\n●***************| MENU |*************"
       "*****●\n");
printf("*                                         *\n");	
printf("*          1)  --> Addition               *\n");
printf("*          2)  --> Subtraction            *\n");
printf("*          3)  --> Multiplication         *\n");
printf("*          4)  --> Division               *\n");
printf("*          5)  --> remainder of division  *\n");
printf("*          6)  --> Quit                   *\n");
printf("*                                         *\n");
printf("●********************************"
       "*********●\n\n");
	reset();
}



/*------| ADDITION |--------*/	
float addition(float N1,float N2){
    return N1+N2;
}

/*------| REMAINDER OF THE DIVISION |--------*/	
int Mod(int N1,int N2){
return N1%N2;
	}

/*------| SUBTRACTION |--------*/	
float subtraction(float N1,float N2)
{
    return N1-N2;
}

/*------| MULTIPLICATION |--------*/	
 double multiplication( double N1, double N2)
{
    return N1*N2;
}


/*------| DIVISION |--------*/
double division(double N1,double N2){
         return N1/N2;
        }


void division_sur_0(float N1,float N2){
if(N2==0)
{
printf("\nDivide by zero is impossible\n");  
}	
	}




 
/*------| ZWA9 hhhhh |--------*/    
     
void njom(void ){
red();
printf("\n\n\n\n\n\n\n\n\n|=========================================|\n");}  
 
      
void njom2(void ){
printf("\n|=========================================|\n");
red();}  










int main(void){
	

int choix,intNumb;
//printf("\n\n");	

int repet=1;  
 
float Number1, Number2;
int Number3,Number4; 
   
do{
             
              do {
              	Menu();
              	Purple();
              printf("\nEnter Your Choice:\n");
                 reset();
              	printf(" ==>> ");
              	
              scanf("%d",&choix);
              	printf("\n");
              if(choix<1||choix>6){
              	system("cls");
              	red1();
         printf("\nError:Your choice incorrect");
              	reset();}
              }while (choix<1||choix>6);
              switch(choix)
              {    
                  case 1: 
                  red();
                  printf("1) Addition\n");
                  reset();
                          printf("\nEnter Fisrt Number:\n ");
                          scanf("%f",&Number1);
                          printf("\nEnter Your Second Number: \n ");
                          scanf("%f",&Number2);
                  njom();
                    printf("\n\t\t%.3f + %.3f = %.3f \n",Number1, Number2,addition(Number1,Number2));
                  njom2();
                          break;
                   
                  case 2: red();
                  printf("2) Subtraction\n");
                  reset();
                          printf("\nEnter Fisrt Number:\n ");
                          scanf("%f",&Number1);
                          printf("\nEnter Your Second Number: \n ");
                          scanf("%f",&Number2);
                  njom();
                      printf("\n\t\t%.3f - %.3f = %..3f \n",Number1, Number2,subtraction(Number1,Number2));
                  njom2();
                          break;
                   
                   case 3: red();
                  printf("3) Multiplcation\n");
                  reset();
                          printf("\nEnter Fisrt Number:\n ");
                          scanf("%f",&Number1);
                          printf("\nEnter Your Second Number: \n ");
                          scanf("%f",&Number2);
                  njom();
                          printf("\n\t\t%.3f * %.3f = %.3f \n",Number1, Number2,multiplication(Number1,Number2));
                  njom2();
                          break;

                  
                  case 4:red();
                   printf("4) Division\n");
                  reset();
                  do{
                          printf("\nEnter Fisrt Number:\n ");
                          scanf("%f",&Number1);
                  
                          printf("\nEnter Your Second Number: \n ");
                          scanf("%f",&Number2);
                          if(Number2==0)
                          {
                          	red1();
                 division_sur_0(Number1,Number2);  
                          	reset();
                          	system("cls");
                          	   	
                          }
                  }while(Number2==0);
                  njom();
                          printf("\n\t\t%.3f / %.3f = %.3f \n",Number1, Number2,division(Number1,Number2));
                  njom2();
                          break;

                 
               case 5: red();
                  printf("4)remainder of division \n");
                  reset();
                          printf("\nEnter Fisrt Number:\n ");
                          scanf("%d",&Number3);
                          printf("\nEnter Your Second Number: \n ");
                          scanf("%d",&Number4);
                  njom();
                          printf("\n\t\tRemainder of %d divided by %d is: %d \n",Number3, Number4,Mod(Number3,Number4));
                  njom2();
                          break;
                 
                 
                 
           
   
              case 6: 
                     system("cls");
                     exit(0);
                   break;
                     
  default : 
                  system("cls");
                  system("cls");
                     red1();
    printf("\n\nError:Your choice incorrect\n\n");
              reset();       }
              
bleu();
printf("\n Press 1 -------------------> for a new operation .\n Press something else  -----> to exit.\n\n===>>> ");  
  reset();
scanf("%d",&repet);  
 system("cls"); 

   }while(repet==1);
   

    return 0;}
