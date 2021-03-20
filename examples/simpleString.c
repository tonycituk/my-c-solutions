#include <stdio.h>

int main()
{
	char myString[] = "this is a string!";

	myString[4] = '_';
    printf("Number of characters in \'%s\' is %d\n", myString, strlen(myString));
	/*printf(myString);*/
    /*Compare a string with strncmp()
        Note: strlen(aString) returns the length of the passed string
    */
    if(strcmp(myString, "this_is a string!", strlen(myString)) == 0){printf("El string contiene el texto esperado");};
	return 0;
}