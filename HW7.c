#include <stdio.h>
#include <ctype.h>

int i, uppercase, ch, j, found;

int main() {
    int n;

    printf("Enter the number of words: \n");
    scanf("%d", &n);
    getchar(); // consume the newline character

    char L1[n][20], L2[n][20];
    printf("Enter the words: \n");

    for (int i = 0; i < n; i++) 
    {
        scanf("%19s %19s", L1[i], L2[i]);  // Limit the input length to 19 characters to avoid overflow
    }

    if (L1[1][1]>='A' && L1[1][1]<='Z') // checking if words are in uppercase or lowercase
        uppercase=1;

    char sentence[100];

    printf("Enter a sentence in language 1: \n");
    getchar();  // consume the newline character
    fgets(sentence, sizeof(sentence), stdin);

    for (i=0; i<=n; i++)
    {
        if (sentence[1]==L1[i][1])
        {
            for (j=0; j<20 && j!='\0'; j++)
            {
                sentence[j]=L2[i][j];
            }
        }
    }     

    printf("%s", sentence);
    
    /*while (uppercase && sentence[i])
    {
        ch = sentence[i];
        putchar(toupper(ch));
        i++;        
    }*/

    return 0;
}


