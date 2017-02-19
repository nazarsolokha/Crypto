#include <stdio.h>
#include <cs50.h>
#include <string.h>
  
char GetUpperCase(char in)
{
    switch (in)
    {
        case 'a': return 'A'; 
        case 'b': return 'B';
        case 'c': return 'C';
        case 'd': return 'D';
        case 'e': return 'E';
        case 'f': return 'F';
        case 'g': return 'G';
        case 'h': return 'H';
        case 'i': return 'I';
        case 'j': return 'J';
        case 'k': return 'K';
        case 'l': return 'L';
        case 'm': return 'M';
        case 'n': return 'N';
        case 'o': return 'O';
        case 'p': return 'P';
        case 'q': return 'Q';
        case 'r': return 'R';
        case 's': return 'S';
        case 't': return 'T';
        case 'u': return 'U';
        case 'v': return 'V';
        case 'w': return 'W';
        case 'x': return 'X';
        case 'y': return 'Y';
        case 'z': return 'Z';
        default: return in;
    }
}
 
int main ()
{
  char* input = GetString();
  int len = strlen(input);
   
  for (int i=0;i<len;i++)
  {
      if (input[i]=='\0') break;
      if (input[i]==' ')
      {
          printf("%c",GetUpperCase(input[i+1]));
      }
      if (i==0)
      {
          printf("%c",GetUpperCase(input[i]));
      }
  }
  printf("\n");
  return 0;
}