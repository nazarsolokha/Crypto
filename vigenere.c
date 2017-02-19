#include <stdio.h>
#include <cs50.h>
#include <string.h>
 
int main(int argc, string argv[])
{
    if (argc!=2) 
    {
        printf("Usage: ./vigenere k");
        return 1;
    }
    int kLen = strlen(argv[1]);
    for (int i=0;i<kLen;i++)
    {
        if (!((argv[1][i]>='a'&&argv[1][i]<='z')||(argv[1][i]>='A'&&argv[1][i]<='Z')))
        {
            printf("Usage: ./vigenere k");
            return 1;
        }
    }
     
    printf("plaintext: ");
    char* input = GetString();
    int kPos = 0;
    int len = strlen(input);
    printf("ciphertext: ");
    for (int i=0;i<len;i++)
    {
        char in = input[i];
        char kc = argv[1][kPos%kLen];
        int k = 0;
        if (kc>='a' && kc<='z')
            k = kc - 'a';
        if (kc>='A' && kc<='Z')
            k = kc - 'A';
        if (in>='a' && in<='z')
        {
            in = ((in-'a')+k)%26 + 'a';
            kPos++;
        }
        if (in>='A' && in<='Z')
        {
            in = ((in-'A')+k)%26 + 'A';
            kPos++;
        }
         
        printf("%c",in);
    }
    printf("\n");
    return 0;
}