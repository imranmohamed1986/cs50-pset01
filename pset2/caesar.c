#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int upperbound(char c);

int main(int argc, string argv[])
{
    if(argc == 2)
    {
        int digits = strlen(argv[1]);
        bool isnum = true;
        for(int i = 0; i < digits; i++)
        {
            if(isdigit(argv[1][i]) == 0)
            {
                isnum = false;
 //             printf("isnum %i false", i);
                break;
            }
        }
        if(isnum == true)
        {
            int rotateby = atoi(argv[1]) % 26;
            string plaintext = get_string("plaintext: ");
            int charcount = strlen(plaintext);
            char ciphertext[charcount + 1]; //+ 1 wegen null-character; wichtig: strlen(ciphertext) wäre unbrauchbar, da der String noch leer ist (Position der Null ist willkürlich)
            ciphertext[charcount] = '\0'; //nur so klappt das dann auch mit strlen (weil das Programm sonst das Ende des Strings nicht findet)
            for (int i = 0; i < charcount; i++)
            {
                if (isalpha(plaintext[i]) != 0 && (int) plaintext[i] + rotateby <= upperbound(plaintext[i]))
                {
                    ciphertext[i] = (char) ((int) plaintext[i] + rotateby); //achtung, Overvflow!! (wieder vorne anfangen; Trennung upper/lower)
                }
                else if (isalpha(plaintext[i]) != 0 && (int) plaintext[i] + rotateby > upperbound(plaintext[i]))
                {
                    ciphertext[i] = (char) ((int) plaintext[i] + rotateby - 26);
                }
                else
                {
                    ciphertext[i] = plaintext[i];
                }
            }
            printf("ciphertext: %s\n", ciphertext);
            return 0;
        }
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    else
    {
        printf("Please provide us with ONE argument.\n");
        return 1;
    }
}

int upperbound(char c)
{
    if (isupper(c) == 0) //=> is lower
    {
        return 122;
    }
    else
    {
        return 90;
    }
}