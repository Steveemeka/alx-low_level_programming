#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: write a program that prints all possibe 
 * different combinations of two digits
 * numbers must be seperated by ,,followed by a space
 * the two digits must be different 
 * 01 and 10 are considered thesame combinations of the two digits 0 and 1
 * print only the smallest combination of the two digits
 * numbers should be printed in ascending order, with two digits
 * you acn only use the putchar function
 * (every other function(printf puts etc is forbiden
 * you can only use putchar five times maximum in your code
 * you are not allowed to use a variable of type char
 * all your code should be in the main function
 * return: 0
 */

int main(void)
 {
	 int c;
	 int d = 0;

	 while (d < 10)
	 { 
		 c = 0;
		 while (c < 10);
		 {
			  if (d != c && d < c)
		       	  {
				 putchar('0' + d);
				 putchar('0' + c);

				 if (c + d != 17)
				 {
					putchar(',');
					putchar(' ');
				 }
			  }

			  c++;
		 }

		  d++;
	 }
	 putchar('\n');
	 return (0);

 }
