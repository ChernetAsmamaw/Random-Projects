#include <stdio.h>
#include <cs50.h>

// we include external libraries to enlist functionalities like thr standard io librariy for printf and the cs50 for get_string
// %s is a place holder fir the variable outside of the quote
// For single characters you must use single quotes and for long text double quote
// void indicates the function doesn't take any input


int main(void)
{
    printf("hello, world\n");
    
    string answer = get_string ("What's your name? ");
    printf("Hello, %s\n", answer);
}


//Conditionals

int main(void)
    int x = get_int("What is the x? ");
    int y = get_int("What is y? ");

    if (x < y)
    {
        printf("x is less than y\n");
    }

    else if (x > y)
    {
        printf("x is greater than y\n");
    }

    else
    {
        printf("x is equal to y\n");
    }

}




// Loops

int main(void)
{

    int i = 3;
    while (i > 0)
    {
        printf("meow\n");
        i--;
    }

    int i = 0;
    while (i <= 3)
    {
        printf("meaw\n");
        i++;
    }

    for (int i = 0; i<3; i++)
    {
        printf("meaw\n")
    }


}
 



// Forever loop: this will loop for ever al long as  the parameter is true or any number other than 0
// Standard header file is needed to use boolian special characters like true in this case cs50.h

"""
int main(void)
{

    while (true)
    {
        printf("meaw\n")
    }

    while (1)
    {
        printf("meaw\n")
    }

}
"""



// nested loops


int main(void)
{
    int n = get_int("Enter size: ");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}

// usimg a do-while loop is a good idea when getting an input from user and need to check if it meets certain requiremnets
int main(void)
{
    int n;
    do
    {
      n = get_int("Enter size: "); 
    }
    while (n < 1);
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}



// if you want to call a function at start but it's declared at the bottom you hav to tease C by pasting the first line of code of the function to the top
