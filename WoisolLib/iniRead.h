#include<stdio.h>
void iniSetLineBegin(FILE* file)
{
	fseek(file, -10, SEEK_CUR);
	for (int t = 0;t < 11;t++) { if (fgetc(file) == '\n') { fseek(file, -3, SEEK_CUR); break; } }
	while (1)
	{
		fseek(file, -20, SEEK_CUR);
		for (int t = 0;t < 10; t++) { if (fgetc(file) == '\n') { goto Count; } }
	}
Count:
	return;
}
void iniNextLine(FILE* file)
{
	while (1) { if (fgetc(file) == '\n') { break; } }
}
void iniRead(FILE* file, int* storeData)
{
	char tempChar = 0;
	while (1)
	{
		switch (tempChar)
		{
		case '[':
		case '#':iniNextLine(file);
		case '\n':continue;
		default:
			fscanf(file, "%*s = %d", storeData);return;//break;//艹这个break只是出了switch……
		}
	}
}
void iniAddObject(FILE* file, char* objectName, int data)
{
	fseek(file, 0, SEEK_END);
	fprintf(file, "%s = %d\n", objectName, data);
}
void iniRewrite(FILE* file, int data)
{
	char tempChar = 0;
	while (1)
	{
		tempChar = fgetc(file);
		switch (tempChar)
		{
		case '[':
		case '#':iniNextLine(file);
		case '\n':continue;
		case ' ':if (fgetc(file) == '=' && fgetc(file) == ' ')
		{
			fseek(file, ftell(file), SEEK_SET);
			fprintf(file, "%d", data);
			goto Exist;
		}
		}
	}
Exist:
	fflush(file);
	return;
}