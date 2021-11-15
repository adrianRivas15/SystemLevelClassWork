#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
int i;
char small[20] = "z";
char large[20] = "";
char w[20];

        while(1){
                printf("Enter word: ");
                scanf("%s", w);

        if(strlen(w) == 4)

        break;

        if(strcmp(w, small) < 0)

                strcpy(small, w);

        if(strcmp(w, large) > 0)

                strcpy(large, w);

}

                printf("\nSmallest word: %s\n", small);

                printf("Largest word: %s", large);

return 0;

}
