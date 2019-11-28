#include "mybank.h"
#include <stdio.h>

static double status_bank [ACCOUNT_LENGHT][ACTIVITY_LENGHT]={{0}};
/*
ACTIVITY_LENGHT[0]=ACCOUNT
ACTIVITY_LENGHT[1]=STATUS if 0==close 1==open 
*/

#include "myBank.h"

void o(){
int account=0 ;

    for (int i = 0; i < ACCOUNT_LENGHT; i++)
    {
       if(status_bank[i][1]==0.0){
        account=i+901;
        printf("\n WELCOME TO THE BANK , YOUR NUMBER ACCOUNT IS : %d ",account);
        status_bank[i][1]=1.0;
        printf("\n Initial deposit?");
        scanf("%lf",&(status_bank[i][0]));
        break;
       }
        
    }
    if(account==0){
        printf("Sory,All Account Busy!");
    }

    
}

void b(int number_account){

    if(status_bank[number_account-901][1]==1){

        printf("\n YOUR SOLD IS : %.2f",status_bank[number_account-901][0]);
    }
    else
    {
        printf("\n Your Account is close or Don't Exist");
    }
    
}


void d(int number_account){

    if(status_bank[number_account-901][1]==1){
    printf("\n Amount?:");
    double result_money=0;
    scanf("%lf",&result_money);
    status_bank[number_account-901][0]=status_bank[number_account-901][0]+result_money;
        printf("\n YOUR NEW SOLD IS : %.2f",status_bank[number_account-901][0]);

    }
    else
    {
        printf("\n Your Account is close or Don't Exist");
    }

}

void w(int number_account){

    if(status_bank[number_account-901][1]==1){
    printf("\n WHO MONEY DO YOU WANT ?:");
    double result_money=0;
    scanf("%lf",&result_money);
    if ((status_bank[number_account-901][0]-result_money)>=0){
    status_bank[number_account-901][0]=status_bank[number_account-901][0]-result_money;
        printf("\n YOUR NEW SOLD IS : %.2f",status_bank[number_account-901][0]);
    }
    else {
        printf("\n YOUR SOLD IS NOT sufficient");
    }
    }
    else
    {
        printf("\n Your Account is close or Don't Exist");
    }

}

void c(int number_account){

 if(status_bank[number_account-901][1]==1){
     status_bank[number_account-901][1]=0;
     printf("\n SUCCESFUL CLOSE ACCOUNT.");
}
else 
{
    printf("\n This account is already close");
}
}

void i(double interest_rate){

    for (int i = 0; i < ACCOUNT_LENGHT; i++)
    {
       if (status_bank[i][1]==1){
           status_bank[i][0]=status_bank[i][0]+interest_rate*status_bank[i][0];
       }
    }
    
}


void p(){


    for (int i = 0; i < ACCOUNT_LENGHT; i++)
    {
       if (status_bank[i][1]==1){
          
          printf ("\n The sold of Account :%d is :%.2f",(i+901),status_bank[i][0]);
          }
    }

}

void e(){
  for (int i = 0; i < ACCOUNT_LENGHT; i++)
    {
       if (status_bank[i][1]==1){
          status_bank[i][1]=0;
          printf ("\n The Account %d is Succesful closed ",(i+901));
          printf("\n\n  ");
          }
              
    }


}




