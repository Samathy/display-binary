#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <bitset>
int nu; //the number specified to convert to binary.

int main (int argc, char* argv[])
{

    if (argc > 1)
    {
        if (strncmp(argv[1], "-h", 2) == 0)
            {
                std::cout << "binary [options] [number]\n-h    Displays this message.\n-d    Displays numbering scheme.\n-t    Takes number and displays it in binary\n"; //display help message.
            }   

        else if (strncmp(argv[1], "-d", 2)  == 0)
            { 
                std::cout << "| 128 |  64 |  32 | 16 | 8 | 4 | 2 | 1 |\n"; //display binary numbering scheme.
            }
        
        else if ( strncmp (argv[1], "-t", 2) == 0 )
            {
                nu = atoi(argv[2]); //convert input to integer
                std::bitset<>x(nu); //display integer's binary form.
                std::cout << x << "\n";
            }    
        else 
            {
                std::cout << "binary [options] [number]\n try using -h\n";
            }
    }
       
    else 
    {
       std::cout << "binary [options] [number]\n-h    Displays this message.\n-d    Displays numbering scheme.\n-t    Takes number and displays it in binary\n";
    }   
   
    return 0;

}

