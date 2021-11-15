#include<stdio.h>
int main(){
char pass[20]; // This line will create an array of 20 called pass so that it can be passed through the code

        printf("Type in Password: "); // will ask for the user to input a password into the user interface

        scanf("%s", pass); // this will go through the user input

int score = 0; // with this variable I can call back the final result of the outcome
int i, missing; // declare the varibles
        missing = 0; // the variable will update as the user inputs something and if its too short

for (i = 0; pass[i] !='\0'; i++){ // loop to checkk for the passsword of the user has typed

if (pass[i] >= 'a' && pass[i] <= 'z'){
        missing = 1;}
}

if (missing == 0)
        score = score + 20;// each of the + 20 will take off 20 oints if its missing lower case, lack of capital letter, missing numbers, and more than 2 consecutive characters

        missing = 0; //each of the missing = 0; will check if there any uppercase missing in the password or if its good

for (i = 0; pass[i] != '\0'; i++){ // another for loop to check for lowercase

if (pass[i] >= 'A' && pass[i] <= 'Z'){
        missing = 1;}
}

if (missing == 0) // check and if missing will take off 20 points
        score = score + 20;
        missing = 0;

for (i = 0; pass[i] != '\0'; i++){// another for loop to check the password for a different condtion

if (pass[i] >= '0' && pass[i] <= '9'){
        missing = 1;}
}

if (missing == 0)
        score = score + 20;
        missing = 0;

for (i = 0; pass[i+2] != '\0'; i++){

if ((pass[i+2] - pass[i+1] == 1) && (pass[i+1] - pass[i] == 1)){
        missing = 1;}

}
if (missing == 0)
 score = score + 20;
        missing = 0;

if (score > 30)

        printf("Final Score: %d Unsafe", score); // this will show the final socre and say if the passwrd that was inputted is unsafe
else
        printf("Final Score: %d Safe", score); // this will show the final score and will say that the password is safe

}
