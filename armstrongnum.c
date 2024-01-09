//Checking if armstrong number
#include <stdio.h>


//prototypes
int len(char[]);
int power(int base , int exponent);
int tostr(char str[]);
int check (int z , char st[], int input);

//main function 
int main (void)
{
    int x;

    printf("Enter the number: ");
    // take input
    scanf("%d" , &x);
    char st[25];
    //converting the int into str
    sprintf(st , "%d" , x);
    // chcking the length of the given int
    int z  = len(st);

    check(z , st , x);
    
}

// determining the length of a str
int len(char * str)
{
    int n = 0;
    while (str[n] != '\0')
    {
        n+=1;
    }
    return n;
}


//power function that determines the power using base and exponent
int power(int base , int exponent)
{
    int result = 1;
    for (int i = 0 ; i < exponent ; i++)
    {
        result*=base;
    }
    return result;

}

int check (int z , char st[] , int input)
{   
    // finding the number
    int result = 0;
    for (int i = 0; i< z ; i++)
    {
        int n;
        n = st[i] - '0';
        n = power(n , z);
        result += n;
    }

    //checking if the number is an armstrong number or not

    if (result == input)
    {
        printf("This is an armstrong number \n");
    }

    else
    {
        printf("This is not an armstrong number \n");
    }
}