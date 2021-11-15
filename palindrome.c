#include<stdio.h>
#include<string.h>

int clear(int num){ // decalre a fucntion to check the number is a palindrome or not
int check, second, some=0; //decalre 3 variables that will be used in the code check,second,some
                check = num;

        while( num!=0 ){ //this while loop is decalred to check the numbers remainders and values in the sequence
                second = num % 10;
                some = some*10 + second;
                num /= 10;

}
 //this if statement is used to see if check and some are the same and if they are the same then if the same it will return 0 meaning that it is a palindrome
        if ( some == check )
         return 0;
        else return 1;// if they are not the same then it will return 1 and it is not a palin
drome
}

int main(){
int num; // num will be the variable where the user input will be placed
                printf("Type in a number: ");// printf will oring the Type in  number
                scanf("%d", &num); //this will go through the user input and send it to the f
unction

        if(clear(num) == 0)
                printf("%d It's a Palindrome\n",num); // when the number runs through the function then it will print is a Palindrom
else

                printf("%d It's not a palindrome\n",num); // then if the number is not a pali
ndrome then it will print out It's not a palindrome
return 0;
}
