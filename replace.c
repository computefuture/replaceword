#include <stdio.h>
#include <string.h>
#include <ctype.h> 
#define SIZE 200

int main() {
    char str[SIZE];
    printf("Enter your word here: ");
    scanf("%[^\n]", str);


     char replaceword[SIZE];
    printf("What is the word you want to be replaced? \n");
    scanf("%s", replaceword);

    
    char replaced[SIZE];
    printf("The words you want to replace: \n");
    scanf("%s", replaced);

    while (1) {
        char *pos = strstr(str, replaceword);

        if (pos != NULL) {
            strncpy(pos, replaced, strlen(replaced));
        } else {
            break;
        }

    }

    printf("%s\n", str);

    char *p= str;
    for (int i=0; p[i] !='\0'; i++) {
        if (islower(p[i])) {
            p[i]=toupper(p[i]);
        }
    }
    printf("Converted string is: %s\n", str);

    return 0;

}
