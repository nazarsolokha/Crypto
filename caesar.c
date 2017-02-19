#include <stdio.h>
#include <cs50.h>
#include <string.h>
 
char Crypto(char in, int k)
{
    if (in>='a' && in<='z')
        return ((in-'a')+k)%26 + 'a';
    if (in>='A' && in<='Z')
        return ((in-'A')+k)%26 + 'A';
    return in;
}
  
int main(int argc, string argv[])
{
    if (argc!=2) 
    {
        printf("Usage: ./caesar k");
        return 1;
    }
     
    int k = atoi(argv[1]);
     
    char* input = GetString();
    int len = strlen(input);
     
    for (int i=0;i<len;i++)
    {
        printf("%c",Crypto(input[i],k));
    }
    printf("\n");
    return 0;
}