#include <stdio.h>
#include <stdlib.h>
#include "myBank.h"

int main(int argc, char const *argv[])
{

        char input;
        int account;
        double interest_rate;
        printf("\n Please enter char to run a Program :");
    
   while(input!='e'){
        

        switch (input = getchar())
        {
        case 'o':
            o();
            break;
        case 'b':
        do{
            printf("\n Please enter number account : ");
            scanf("%d",&account);
        }while(account>950 || account<901);
        
        b(account);
            break;

        case 'd':
        do{
            printf("\n Please enter number account : ");
            scanf("%d",&account);
        }while(account>950 || account<901);
            d(account);
            break;
        case 'w':
        do{
            printf("\n Please enter number account : ");
            scanf("%d",&account);
        }while(account>950 || account<901);
            w(account);
            break;
        case 'c':
        do{
            printf("\n Please enter number account : ");
            scanf("%d",&account);
        }	while (account>950 || account<901);
            c(account);
            break;
        case 'i':
         
        do{
            printf("\n Please enter interest rate  : ");
            scanf("%lf",&interest_rate);
        }while(interest_rate>1 || interest_rate<0);

            i(interest_rate);
            break;
        case 'p':
            p();
            break;
        case 'e':
            e();
            break;

        default:
                fflush(stdin);
                getchar();
        printf("\nTry Again:");
            break;
        }
  
    }


    return 0;
}
