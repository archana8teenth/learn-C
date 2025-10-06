//variables and arithmetic expressions
// formula °C=(5/9)(°F-32) to print fahrenheit temp and their centigrde or celsius equivalent

// the motive is to introduce ideas like comments, declarations, variables, arithmetic expressions, loops, and formatted output.

#include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()
{
  float fahr, celsius;
  float lower, upper, step;
  
  lower = 0;    /*lower limit of temperature scale*/   //also called assignments statements
  upper = 300;  /*upper limt*/
  step = 20;    /*step size*/

  fahr = lower;
  while (fahr <= upper){             //while is loop that repeats once per line
    celsius = 5.0* (fahr-32.0) / 9.0;
    printf("%3.0f/t%6.1f/n", fahr, celsius);
    fafhr = fahr + step;
  }
}



/* this is how you create comment, can also use '//', used to explain what the program does, it used ignored by the compiler; maybe used freely to make program easier to understand*/


//declaration- it announces the properties of variables, can consists of name and a list of variables. all variables must be declared before they are used, usually at the beginning of the function before any executable statements. such as, int fahr, celsius;

// the type int means the variables listed are integers. range is machine dependent but usually 16-bits ints: -32768 and +32768
// similarly, float means floating point that is number that may have functional part. typically range is 32-bit quantity with at least six significant digits and magnitude between \(10^{-38}\) and \(10^{38}\).

//other types are: char - character - a single byte
//                 short - short integer
//                 long - long integer
//                 double - double preicison floating point
