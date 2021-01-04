#include<stdio.h>
#include<stdlib.h>
int main(int c, char *argv[])
{
        char status = remove(argv[1]);
        if( argv < 1 ){
                printf("\033[01;31margs needed usage: ./delfile <filename>033[0$
        }
        if( status == 0 ){
                printf("\033[01;32mfile %s deleted correctly!\033[00m\n",argv[1$
        }
        else
        {
                printf("\033[01;31mfile could not be deleted! try running this $
        }

   return 0;
}

