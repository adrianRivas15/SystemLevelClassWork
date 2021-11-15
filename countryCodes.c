#include <stdio.h>
struct dial{ //the struct will be used to store the countries names and there dial code
char *country;// country would be a character
int code; // code will be a decalred variable
};

int main (int argc, char* argv[]) {
int intl_code, i;
const struct dial countries[] = { // this array will contain all the 20  countries names and there dial code
{"Afghanistan", 93}, {"Japan", 81},
{"Calbodia", 855}, {"Liberia", 231},
{"Denmark", 45}, {"Malawi", 265},
{"Egypt", 20}, {"Mexico", 52},
{"Figi", 679}, {"North Korea", 850},
{"Germany", 49}, {"Panama", 507},
{"Guatemala", 502}, {"Poland", 48},
{"Hungary", 36}, {"Qatar", 974},
{"Iran", 98}, {"Saudi Arabia", 966},
{"Italy", 39}, {"South Korea", 82}
};

int list = sizeof(countries) / sizeof(*countries); //stores what can be inputed in when asked for the country
        do{

int error = 0;
                printf("Type in code for a country: "); // it will print to type the in code for a specific country that you are looking

                scanf("%d", &intl_code); // this will scan the user input and check to see if the code is stored in the array

if (intl_code == -1) // this is statment will allow the user to have an option to stop the search by typing -1
break; // this will break the loop if the user type -1

        for (i = 0; i < list; i++){ // for loop will check the array if the code is stored in the array
        if (countries[i].code == intl_code){ // if the dial code is found then it bring back the country name
                printf("The country is: %s\n", countries[i].country); // it will print the country is ""
                error = 1; // this will check if it's an error
}
}

if (!error)
                printf("Sorry code for country is not found\n"); //when the user inputs a dial code and its not in the array then this will be printed that it could not find the country.
}
        while(1);

        return 0;
}
