#include<stdio.h>
int main()
{
int fA=1,cA=1,gA=1,tA=1;
int fB=0,cB=0,gB=0,tB=0;
int ch,ch1;
printf("\n---------RIVER CROSSING GAME---------");
printf("\n\nHelp farmer to cross the river using Boat with his Cow,Grass and Tiger");
printf("\nInstructions \n1)At a time you can take only 2 in a boat \n2)cow will eat the grass \n3)Tiger will kill the cow");
printf("\n4)you can win the game if you avoid Tiger-Cow and Cow-Grass combination in either in boat or RiverBank ");
printf("\n5)if you  choose Tiger-Cow and Cow-Grass combination you will loose the game");
while(fA!=0||cA!=0||gA!=0||tA!=0)
{
    printf("\nThere are %d farmer %dcow %dgrass %dtiger in side A",fA,cA,gA,tA);
    if(fA==0)
    {
        if(cA==1&&gA==1)
        {
            printf("\nCow ate the grass!\n you lost!");
            exit(0);
        }
        if(tA==1&&cA==1)
        {
            printf("\nTiger killed cow!\n you lost!");
            exit(0);
        }
    }

    A1:
        printf("\n\nHow many you want to cross from A to B ?(1/2):");
        scanf("%d",&ch);


    while(ch>0)
    {
        if(ch==1||ch==2)
        {

        //Side A of river bank//
            A:
            printf("\n 1.Farmer \n 2.cow\n 3.Grass\n 4.Tiger");
            printf("\n\nEnter your choice:");
            scanf("%d",&ch1);
            switch(ch1)
            {
                case 1:if(fA!=0)
                    {
                        printf("\nFarmer crossed from A to B  ");

                        fA--;
                        fB++;

                    }

                    else
                    {
                        printf("\nFarmer is not there in end A");
                        goto A;
                    }
                    break;
                case 2:if(cA!=0)
                    {
                        printf("\nCow crossed from A to B ");
                        cA--;
                        cB++;
                    }

                    else
                    {
                        printf("\nCow is not there in end A");
                        goto A;
                    }
                    break;

                case 3:if(gA!=0)
                    {
                        printf("\nGrass crossed from A to B");
                        gA--;
                        gB++;
                    }
                    else
                    {
                        printf("\nGrass is not there in end A");
                        goto A;
                    }
                break;

                case 4:if(tA!=0)
                    {
                        printf("\nTiger crossed from A to B");

                        tA--;
                        tB++;
                    }
                    else
                    {
                        printf("\nTiger is not there in end A");
                        goto A;
                    }
                    break;
                default:printf("Invalid choice");
                goto A;
                exit(0);
            }
        }


        else{
            printf("Invalid entry");
            goto A1;
            exit(0);
            }
        ch--;
    }
    if(fA==0)
    {
        if(cA==1&&gA==1)
        {
            printf("\nCow ate the grass!\n you lost!");
            exit(0);
        }
        if(tA==1&&cA==1)
        {
            printf("\nTiger killed cow!\n you lost!");
            exit(0);
        }
    }

    if(fB==0)
    {
        if(cB==1&&gB==1)
        {
            printf("\nCow ate the grass!!\n you lost!!");
            exit(0);
        }
        if(tB==1&&cB==1)
        {
            printf("\nTiger killed cow!!\n you lost!!");
            exit(0);
        }
    }



//end of A
  if(fB==1&&cB==1&&gB==1&&tB==1)
  {
    printf("\nCongragts! you have successfully crossed the river");
    printf("\n%dfarmer %dcow %dgrass %dtiger in side B",fB,cB,gB,tB);
  }
  else
  {

    printf("\n%dfarmer %dcow %dgrass %dtiger in side B",fB,cB,gB,tB);
   /* while(fB==0)
    {
        if(cA==1&&gA==1)
        {
            printf("Cow Ate the grass!!\n you lost!!");
            exit(0);
        }
        if(tA==1&&cA==1)
        {
            printf("Tiger killed cow!!\n you lost!!");
            exit(0);
        }
    }*/
    printf("\n\nBoat ready to start from B to A");

    B1:
    printf("\n\n How many you want to cross from B to A?(1/2):");
    scanf("%d",&ch);

    while(ch>0)
    {
        if(ch==1||ch==2)
        {


        B:
        printf("\n 1.Farmer \n 2.cow\n 3.Grass\n 4.Tiger");
        printf("\n\nEnter your choice:");
        scanf("%d",&ch1);
        switch(ch1)
        {
            case 1:if(fB!=0)
                {
                    printf("\nFarmer came back from B to A ");
                    fA++;
                    fB--;
                }
                else
                {
                    printf("\nFarmer is not there in end B");
                    goto B;
                }
                break;
            case 2:if(cB!=0)
                {
                    printf("\nCow came back from B to A ");
                    cB--;
                    cA++;
                }

                else
                {
                    printf("\nCow is not there in end B");
                    goto B;
                }
                break;

            case 3:if(gB!=0)
                {
                    printf("\nGrass came back from B to A");
                    gB--;
                    gA++;
                }
                else
                {
                    printf("\nGrass is not there in end B");
                    goto B;
                }
                break;

            case 4:if(tB!=0)
                {
                    printf("\nTiger came back from B to A");
                    tB--;
                    tA++;
                }
                else
                {
                    printf("\nTiger is not there in end B");
                    goto B;
                }
                break;

            default:printf("\nInvalid choice");
                    goto B;
                    exit(0);
        }

        }

        else{
                printf("\nInvalid entry\n");
                goto A1;
                exit(0);
            }
    ch--;
    }
  }

}

printf("\n Congratulations!!! You Won");
exit(0);
}

