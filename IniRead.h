//BOF 2023-11-11
//PT 2023-11-11 08:48
//About:暴力解析ini文件：改进scanf&增加写入功能！
#include<stdio.h>

void iniSetLineBegin(FILE* file, int dV2)
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
		case '#':nextLine(file);
		case '\n':continue;
		default:
			fscanf(file, "%*s = %d", storeData);return;//break;//艹这个break只是出了switch……
		}
	}
}
void iniRewrite(FILE* file, int inputData)
{
	char tempChar = 0;
	while (1)
	{
		tempChar = fgetc(file);
		switch (tempChar)
		{
		case '[':
		case '#':nextLine(file);
		case '\n': continue;
		case ' ':if (fgetc(file) == '=' && fgetc(file) == ' ')
		{
			fseek(file, = ftell(file), SEEK_SET);
			fprintf(file, "%d", inputData);
		}
		}
		break;
	}

}
// //EOF 2023-11-11 11:43 艹
//EOF 2023-11-11 13:58//成了！！！！成了家人们！！！居然要先一个fseek才能写入！！！
