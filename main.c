// Author: Akshat Harlalka avh5936@psu.edu
// Collaborator: Quan Shi qks5036@psu.edu
// Collaborator: Yashvi Makhdiya yxm5208@psu.edu
// Section: 1
// Breakout: 15

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

// function to return n!
int sum_n(int n)
  {
    //Recursion
    if (n != 0)
    {
      
      return (sum_n(n-1) + n);
    }

    // base case
    else
    {
      return 0;
    }
  }

// function to print string times n
void print_n(const char *s, int n)
  {
    //Recursion
    if (n != 0)
    {
      printf("%s\n",s);
      return print_n(s,n-1);
    }

    // base case
    else
    {
      //Do nothing
    } 
  }
int main(void) {

  // taking the int
  char* temp = readline("Enter an int: ");
  int n = atof(temp);

  // printing n!
  int sum = sum_n(n);
  printf ("sum is %d.\n", sum);

  // taking the string
  char* s = readline("Enter a string: ");

  // printing s n times
  print_n(s,n);
}