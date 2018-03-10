#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main(int argc, string argv[])
{
    // check for 2 arguments only(name of the program and a Key to Encrypt)
    if (argc != 2)
    {
        printf("Make sure you include a key!\n");
        return 1;
    }

    // once I check for correct argv put key into an int k
    int k = atoi(argv[1]);

    // check if the integer is non-negative && If The number is negative Prompt to User asking for a Positive Number
    if (k < 0)
    {
        printf("Input a Positive Number!\n");
        return 1;
    }
    else
    {
        // prompt user for a userPlainText
     printf("Key: %i\n", k);

     string userPlainText = get_string("PlainText: ");

     printf("CypherText: ");
    for (int i = 0, n = strlen(userPlainText); i < n; i++)
    {
      //check if the letter is uppercase or lowercase then convert
      if (islower(userPlainText[i]))
      {

        printf("%c", (((userPlainText[i] + k) - 97) % 26) + 97);
      }
      else if(isupper(userPlainText[i]))
      {
          printf("%c", (((userPlainText[i] + k) - 65) % 26) + 65);
      }
      //if plainText is not a letter from alphabet print it out without encrypting the character(s).
      else
      {
          printf("%c",  userPlainText[i]);
      }
    }

            printf("\n");
            return 0;
    }
 }