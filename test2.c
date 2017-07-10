#include <stdio.h>
#define pass "HollyMolly"
int main(int argc,char **argv)
{
        if(argc != 2)
        {
                printf("Usage : %s password\n",argv[0]);
                return(0);
        }
        if(!strcmp(argv[1],pass))
        {
                printf("Right Password!!!!!\n");
        } else 
        {
            printf("Wrong Password!\n");
        }
        return(0);
}