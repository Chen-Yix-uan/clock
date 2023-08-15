#include<iostream>
#include<windows.h>
using namespace std;

int main()
{
	int xxxx = 2022;
	int y = 11,t = 13;
	int shi = 20,fen = 34,miao = 20;
	string weekdays = "÷‹»’";
	int numwd = 43;
	while(1)
	{
		cout << xxxx << "/" << y << "/" << t << endl;
		cout << shi << ":" << fen << ":" << miao;
		miao++;		
		if(miao == 60)
		{
			miao = 0;
			fen++;
			if(fen == 60)
			{
				fen = 0;
				shi++;
				if(shi == 24)
				{
					t++;
					switch(y)
					{
						case 1:
							if(t == 31)
							{
								y++;
							}
						case 2:
							if(xxxx % 4 == 0 && xxxx % 400 != 0 && xxxx / 100 == 0)
							{
								if(t == 29)
								{
									y++;
								}
							}
							else
							{
								if(t == 28)
								{
									y++;
								}
							}
						case 3:
							if(t == 31)
							{
								y++;
							}
						case 4:
							if(t == 30)
							{
								y++;
							}
						case 5:
							if(t == 31)
							{
								y++;
							}
						case 6:
							if(t == 30)
							{
								y++;
							}
						case 7:
							if(t == 31)
							{
								y++;
							}
						case 8:
							if(t == 31)
							{
								y++;
							}
						case 9:
							if(t == 30)
							{
								y++;
							}
						case 10:
							if(t == 31)
							{
								y++;
							}
						case 11:
							if(t == 30)
							{
								y++;
							}
						case 12:
							if(t == 31)
							{
								y = 00;
								xxxx++;
							}
					}
				}
			}
		}
	Sleep(1000);
	system("cls");
	}
	return 0;
}
