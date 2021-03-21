#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: \n");
    scanf("%s", &name);//This will scan the name.
    printf("Your name is %s.", name);//This will show (print) the name.
    return 0;
}
