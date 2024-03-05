/*Encodes a user-entered message with a Caesar cipher. James Moore.*/

#include <stdio.h>
#include <stdlib.h>
#define LEN 80

/*Function accepts the user entered string and a shift value and encodes message*/
void encrypt(char *message, int shift) {


    for(;*message != '\0'; message++) {


        if (*message >= 'a' && *message <= 'z') {
            *message = (( *message - 'a' ) + shift) % 26 + 'a';
        }

        else if (*message >= 'A' && *message <= 'Z') {
            *message = (( *message - 'A' ) + shift) % 26 + 'A';
        }

        else {
            *message = *message;
        }

    }


}

/*Accepts user-entered string and shift value and calls encrypt function*/
int main()
{

    char message[LEN + 1];
    int shift;

    printf("Enter message to be encrypted: ");
    fgets(message, sizeof(message), stdin);
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);

    encrypt(message, shift);
    printf("Encrypted message: %s", message);


    return 0;
}
