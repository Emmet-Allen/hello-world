#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, string argv[1])


{
// Prompt user for Key 
    if (argc == 2)
    {

// Check if Input is Digit
            for(int i = 0, key_length= strlen(argv[1]); i < key_length; i++)
            {
                int number = isdigit(argv[1][i]);
                {
                    if (number != 0)
                    {
// Do Nothing. Valid Input
                    }
                    
// Reprompt User for Valid Key
                        else
                        {
                        printf("Usage: ./ceasar key\n");
                        return 1;
                        }
                
                }   
            }  
     }

// Convert String Argv into Int Key
    int key = atoi(argv[1]);

// Get Plaintext
    string plaintext = get_string("Plaintext:");

// Create an Array for Ciphertext

    char ciphertext[strlen(plaintext)];

// Encrypt Plaintext to Ciphertext
    for(int n = 0; n < strlen(plaintext); n++)
    {

// Determine Letters in Plaintext
        if (isalpha(plaintext[n]))
        {
// Encrypt Uppercase
            if (isupper(plaintext[n]))
            {
               ciphertext[n] = (((plaintext[n] - 65 + key ) %25) + 65);
            }
// Encrypt Lowercase
            if (islower(plaintext[n]))
            {
                ciphertext[n] = (((plaintext[n] - 97 + key) %25 ) + 97);
            }
// Keep Everything Else
            else
            {
                ciphertext[n] = plaintext[n];
            }       
        }
    }
        printf("Ciphertext:%s",ciphertext);
        return 0;
}

