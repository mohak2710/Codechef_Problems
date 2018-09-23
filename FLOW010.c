#include<stdio.h>
int main()
{
    int t,i;
    char c;
    scanf("%d\n",&t);
    while(t--)
    {
        scanf("%c",&c);
        if(c=='B'||c=='b')
            printf("BattleShip\n");
        else if(c=='C'||c=='c')
            printf("Cruiser\n");
        else if(c=='D'||c=='d')
            printf("Destroyer\n");
        else if(c=='F'||c=='f')
            printf("Frigate\n");
        else
            printf("\n");
    }
return 0;
}
