/*This programs prompt user for name and return initials.
  This program is written by x.oper and this code is available
  on the git repository named "CS50x" at https://github.com/Czoper33*/

#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <cs50.h>

int main()

{
    string name = 0;
    int start = 0;
    
    // Prompt user for name
    printf("Type your name: ");
    name = GetString();
    
    // Get first initial letter, check for spaces
    printf("%c", toupper(name[start]));
    while (name[start] == ' ')
        start++;
    
    for (int i = start + 1, n = strlen(name); i < n; i++)
    {
        // Get second initial letter after space
        while (name[i] == ' ')
        {
            i++;
            
            // Print only if next character is not a space
            if (i < n && name[i] != ' ')
                printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}        
