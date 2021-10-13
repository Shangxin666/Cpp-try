/*   1--AEILNORSTU  2--DG 3--BCMP 4--FHVWY 5--K 8--JX 10--QZ */
#include <stdio.h>
 int main(void)
 {
 	char ch;
 	int sum = 0;
 	printf("Enter a word: ");
 	while((ch = getchar()) != '\n' )
 	{
 		switch(ch)
 		  {
		  case'A':case'a':case'E':case'e':case'I':case'i':case'L':case'l':case'N':case'n':
 		  	sum = sum + 1;
 		  	break;
 		  case'O':case'o':case'R':case'r':case'S':case's':case'T':case't':case'U':case'u':
 		  	sum = sum + 1;
 		  	break;
 		  case'D':case'd':case'G':case'g':
 		  	sum = sum + 2;
 		  	break;
 		  case'B':case'b':case'C':case'c':case'M':case'm':case'P':case'p':
 		  	sum = sum + 3;
 		  	break;
 		  case'F':case'f':case'H':case'h':case'V':case'v':case'W':case'w':case'Y':case'y':
 		  	sum = sum + 4;
 		  	break;
 		  case'K':case'k':
 		  	sum = sum + 5;
 		  	break;
 		  case'J':case'j':case'X':case'x':
 		  	sum = sum + 8;
 		  	break;
 		  case'Q':case'q':case'Z':case'z':
 		  	sum = sum + 10;
 		  	break;
 		  }
	}
 	printf("Scrabble value:%d\n",sum);
 	return 0;
 }
