 #include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter String: \n");
    fgets(str, sizeof(str), stdin);//This will read the user input.           
    displayString(str);// Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
//This will provide output.
    printf("String Output: ");
    puts(str);
}
