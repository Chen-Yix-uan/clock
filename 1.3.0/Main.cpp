#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
void No_Cursor(){
	HANDLE hOut;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 1;
	cci.bVisible = false;
	SetConsoleCursorInfo(hOut,&cci);
}
void gotoxy(short x,short y){
	COORD pos = {x,y};
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut,pos);
	No_Cursor();
}
int main(){
	time_t t;
	struct tm *data_time = new tm;
	cout << "当前时间:" << endl;
	while(true)
	{
		gotoxy(10,0);
		time(&t);
		data_time = localtime(&t);
		if(data_time->tm_sec >= 10){
			cout << data_time->tm_hour << ":" << data_time->tm_min << ":" << data_time->tm_sec;
		}
		else{
			cout << data_time->tm_hour << ":" << data_time->tm_min << ":0" << data_time->tm_sec;
		}
		Sleep(1000);
	}
}

