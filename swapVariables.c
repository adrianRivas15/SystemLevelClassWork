#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
char *string1 = malloc(sizeof(char) * 100); // declare the variable for string 1
char *string2 = malloc(sizeof(char) * 100); // declaring the variable for string 2

        printf("Type string one: ");// this will pring ask the user to input a string in the for strng one

        scanf("%[^\n]%*c",string1); //this will will go theough the user input after imputtin
g

        printf("Type string two: ");//this will print type string two

        scanf("%[^\n]%*c",string2); //scan the user input after they typed for string two

// these equations will swap the strings from string 1 and string 2 input and also from strin
g 2 and string 1
string1=string1+(string1-string2);
string2=string1-(string1-string2)/2;
string1=string1-(string1-string2)*2;

        printf("\nString one is now : %s ",string1); // will print what was inputted for stri
ng 2 and becomes the new string 1

        printf("\nString two is now : %s ",string2); // will print what was string 1 input and will become the new string 2

return 0;

}
