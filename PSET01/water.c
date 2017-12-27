/* This program calculates daily water usage
  This program is written by x.oper and this code is available
  on the git repository named "CS50x" at https://github.com/Czoper33*/

#include <stdio.h>

int main(void)
{
    int minutes; 
    printf("How many minutes does it take you to take a shower?: ");
    scanf("%d",&minutes);
    printf("So you use up %d bottles of water.\n", minutes * (192)/16);
    return 0;
}
