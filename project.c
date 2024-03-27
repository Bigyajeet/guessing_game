#include<stdio.h>
int main()
{
    int secret_no;
    int guess_number;
    secret_no=5;
    int i;
    int guess_lim;
     guess_lim=3;
     for(i=1;i<=guess_lim;i++)
     {
        printf("guess number %d:",i);
        scanf("%d",&guess_number);
        if(guess_number==secret_no)
        {
            printf("you won");
            break;
        }

     }
     if(guess_number!=secret_no)
     {
        printf("you lost");
     }
     return 0;
}