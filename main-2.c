/*Program to read from two files and write to another. James Moore */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LEN 1000

/*Opens files, checks for NULL, reads from files and writes into new file, then closes files*/
int main()
{
    char str[MAX_LEN + 1];
    char str2[MAX_LEN + 1];
    FILE *Year, *Releases, *outFile;
    Year = fopen("Year.txt", "r");
    Releases = fopen("Releases.txt", "r");
    outFile = fopen("outFile.txt", "w");



    if (Year == NULL) {
        printf("Error opening file.");
        return 1;
    }

    printf("Contents of the output file:\n");
    int i;
    i = 0;
    while (fgets(str, MAX_LEN, Year) != NULL && fgets(str2, MAX_LEN, Releases) != NULL) {
        printf("%s:\n %s", str, str2);
        fputs(str, outFile);
        fputs(":", outFile);
        fputs(str2, outFile);

    }

    fclose(Year);
    fclose(Releases);
    fclose(outFile);



    return 0;
}
