
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2){
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL)
    {
        return 1;
    }

    unsigned char bytes[3];
    fread(bytes, 3, 1, file);

    //89 50 4E 47 0D 0A 1A 0A
    if (bytes[0] == 0x89 && bytes[1] == 0x50 && bytes[2] == 0x4e)
    {
        printf("this can be a png.\n");
    }
    else
    {
        printf("this is not a png file man..\n");
    }
}