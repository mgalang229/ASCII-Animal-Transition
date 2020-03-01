#include <iostream>
#include <stdio.h>
#include <windows.h>
using namespace std;

void MaximizeWindow()
{
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
	SMALL_RECT rc;
	rc.Left = rc.Top = 0;
	rc.Right = (short)(min(info.dwMaximumWindowSize.X, info.dwSize.X) - 1);
	rc.Bottom = (short)(min(info.dwMaximumWindowSize.Y, info.dwSize.Y) - 1);
	SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), true, &rc);
}

int main(){
	
	
	
	while(1){
		
		FILE *fp,*fp2,*fp3,*fp4,*fp5;
		MaximizeWindow();
		
		fp = fopen("sample.txt", "r");
		fp2 = fopen("sample2.txt","r");
		fp3 = fopen("sample3.txt","r");
		fp4 = fopen("sample4.txt","r");
		fp5 = fopen("sample5.txt","r");
		
		if(!fp){
			cout << "Cannot open file.\n";
			exit(1);
		}
		
		Sleep(400);
		system("cls");
		system("color 1A");
		
		char c;
		while((c = fgetc(fp)) != EOF){
			cout << c;
		}
		
		Sleep(400);
		system("cls");
		system("color 2B");
		
		char a;
		while((a = fgetc(fp2)) != EOF){
			cout << a;
		}
		
		Sleep(400);
		system("cls");
		system("color 3C");
		
		char b;
		while((b = fgetc(fp3)) != EOF){
			cout << b;
		}
		
		Sleep(400);
		system("cls");
		system("color 4D");
		
		char d;
		while((d = fgetc(fp4)) != EOF){
			cout << d;
		}
		
		Sleep(400);
		system("cls");
		system("color 5F");
		
		char z;
		while((z = fgetc(fp5)) != EOF){
			cout << z;
		}
		
		fclose(fp);
		fclose(fp2);
		fclose(fp3);
		fclose(fp4);
		fclose(fp5);
	}

	return 0;
}
