/* This program print on the screen a half pyramid of specified height by the user
  This program is written by x.oper and this code is available
  on the git repository named "CS50x" at https://github.com/Czoper33*/

#include <stdio.h>

int main(void)
{
    int height;

    //prompt user for input and assign conditions to input
    printf("Specify the height of the Pyramid (between 1 and 23): ");
    scanf("%d", &height);
    
    //print the right line pyramid
    for(int i=0;i<height;i++)
    {
        for(int j=0;j<height-i-1;j++)
        {
            printf(" ");
        }
        for(int z = 0 ;z<i+2;z++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
