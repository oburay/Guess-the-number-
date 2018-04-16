#include <stdio.h>
#include <conio.h>

int main()

{

int x,i,k,y,z=4;
    srand(time(NULL));
    START:
    printf("Guess the number right, you have 5 chances\n");
    scanf("%d",&x);
    y=1+rand()%100;
    for(i=0;i<5;i++)


    {



        if(x==y)
        {
            printf("Wow!!!, you got it right, the number is %d \n",x);
        break;
        }
        else if(z!=0)
        {
        	if (y-10<=x && x<=y+10)
        	{
        		printf("You are close to the number\n");
        	}

            printf("\nYou have %d chances more\n",z);
            z-=1;
            scanf("%d",&x);
            continue;
        }
        else
        {
            printf("HAHAHA!!You lost, the number was %d\n",y);
        }
        printf("\n Type 1 to play again ");
         scanf("%d",&k);
         if (k==1)
         {
            z=4;
            printf("\n");
            goto START;
         }
         else
            printf("\nThanks for checking it out");
    }

    getch();
    return 0;
}
