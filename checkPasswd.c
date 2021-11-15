#include<stdio.h>
int main() {
char character;
        printf("Type in Password: ");// the printf will ask for the user to input a passwrod

int count = 0; // we declare the variable count to count the size of the password the user is inputting in the interface
        do{
                character = getchar();// is a function that will read the input the user puta
                count++; // it will count the length of the user input to check the size

}

while(character != '\n');
int size = (10 - count + 1) * 5; //this will check and calculate the length the user has input in the interface
        if (size > 30)//this will see the size of the user input

                printf("The password is unsafe! Please reset.");
 // this message will pop up if the user input is lower then 30 points in the interface and asked them to reset the passwrod

        else

                printf("The password is safe."); //this message will pop up if the user put a passwrod with more than 30 point in the interface

        return 0;
}