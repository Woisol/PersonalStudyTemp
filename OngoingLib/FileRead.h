#include"iniRead.h"
void fileReadAll(FILE* file, FILE* output)
{
	char tempChar = 0;
	while (1)
	{
		if (tempChar = fgetc(file) == EOF) { break; }
		fputc(tempChar, output);
	}
}
void fileRewrite