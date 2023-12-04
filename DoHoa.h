#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

// Hàm thay ð?i kích c? c?a khung cmd v?i tham s? truy?n vào là chi?u cao, chi?u r?ng.
void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

// Hàm tô màu.
void textcolor(int x)
{
	HANDLE mau;
	mau=GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(mau,x);
}

// Hàm d?ch chuy?n con tr? ð?n t?a ð? x, y.
void gotoxy(int x, int y) {
	HANDLE hConsoleOutput;
	COORD CursorPosition;

	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CursorPosition.X = x;
	CursorPosition.Y = y;

	SetConsoleCursorPosition(hConsoleOutput, CursorPosition);
}

// Hàm xóa màn h?nh.
void XoaManHinh()
{
	HANDLE hOut;
	COORD Position;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	Position.X = 0;
	Position.Y = 0;
	SetConsoleCursorPosition(hOut, Position);
}

void XoaManHinh2()
{
	gotoxy(2,2);
	for(int i=2; i<=24; i++)
		{
			for(int j=2; j<=79; j++)
				cout<<" ";
			gotoxy(2,i);
		}
}

// Hàm l?y Key t? bàn phím
/* GetAsyncKeyState(VK_ESCAPE) => b?t s? ki?n phím Esc */ 

// Hàm t? vi?t
void ToMau(int x, int y, string a, int color) // x, y là t?a ð? con tr? c?n nh?y ð?n ð? vi?t, a là chu?i c?n truy?n vào, color là màu truy?n vào.
{
	gotoxy(x, y);
	textcolor(color);
	cout << a;
	textcolor(7);
}

void Khung(int x0, int y0, int x, int y, int c)
// làm khung hình ch? nh?t t?a d? d?u (x0,y0), t?a d? cu?i (x,y) v?i màu c 
{
	textcolor(c);
	gotoxy(x0,y0);
	for(int i=x0; i<=x; i++)
		printf("%c",196);
		//cout<<'196';
	gotoxy(x0,y);
	for(int i=x0; i<=x; i++)
		printf("%c",196);
		//cout<<'196';
	for(int i=y0+1; i<=y-1; i++)
	{
		gotoxy(x0,i);
		printf("%c",179);
		//cout<<'179';
	}
	for(int i=y0+1; i<=y-1; i++)
	{
		gotoxy(x,i);
		printf("%c",179);
		//cout<<'179';
	}
	gotoxy(x0,y0);
	printf("%c",218);
	gotoxy(x0,y);
	printf("%c",192);
	gotoxy(x,y);
	printf("%c",217);
	gotoxy(x,y0);
	printf("%c",191);
	textcolor(7);
}

void KhungDSLK(int x, int y)
{
	//Khung(3,5,8,7,14);
	Khung(x,y,x+6,y+2,14);
  	//gotoxy(9,6);
	textcolor(14);
	gotoxy(x+7,y+1);
	printf("%c",45);
	printf("%c",45);
	printf("%c",26);
} 

void XoaKhungDSLK(int x, int y)
{
	for(int i=y; i<=y+2; i++)
		{
			gotoxy(x,i);
			cout<<"          ";
		}
}

void KhungMaTran(int M)
{
	textcolor(14);
	gotoxy(4,3);
	for(int i=1; i<=M+2; i++)
		{
			gotoxy(4,2+i);
			printf("%c",179);
			gotoxy(15+6*(M-1),2+i);
			printf("%c",179);
		}
	for(int i=2; i<=M+1; i++)
		{
			gotoxy(7+6*(M-1),2+i);
			printf("%c",179);
		}
	gotoxy(4,3);
	printf("%c",218);//goc tren trai
	gotoxy(4,M+4);
	printf("%c",192);//goc duoi trai
	gotoxy(15+6*(M-1),M+4);
	printf("%c",217);//goc duoi phai
	gotoxy(15+6*(M-1),3);
	printf("%c",191);//goc tren phai
	textcolor(7);
}

void Menu(int x,int y)
{
	gotoxy(x, y);
	for (int i = 1; i < 5; i++)
	{
		if (i == 1 || i == 4)
		{
			for (int j = 1; j < 31; j++)
			{
				if (j == 1 || j == 30) cout << "+";
				else cout << "-";
			}
			cout << endl;
		}
		else
		{
			for (int j = 1; j < 31; j++)
			{
				if (j == 1 || j == 30) cout << "|";
				else cout << " ";
			}
			cout << endl;
		}
	}
}

void KhungMenu(int x, int y)
{
	Menu(x, y);
	//ToMau(x + 10, y + 2, "MENU", 1);
	Menu(x + 4, y + 4);
}