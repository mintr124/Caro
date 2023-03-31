#include "Game.h"
#include "Graphic.h"
#include <mmsystem.h>
void HienTroChuot()
{
    CONSOLE_CURSOR_INFO Info;
    Info.bVisible = TRUE;
    Info.dwSize = 20;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void AnTroChuot()
{
    CONSOLE_CURSOR_INFO Info;
    Info.bVisible = FALSE;
    Info.dwSize = 20;
    SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &Info);
}
void SetConsole(int width, int height) {
    HWND console = GetConsoleWindow();
    RECT r;
    GetWindowRect(console, &r);
    MoveWindow(console, r.left, r.top, width, height, TRUE);
}
void Textcolor(int color) {
    HANDLE hConsoleColor;
    hConsoleColor = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsoleColor, color);
}



void gotoXY(int x, int y)
{
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void PrintScoreBoard()
{
    // Bang 1
    Textcolor(DarkPink);
    gotoXY(SIZE * 4 + 19, 4);
    for (int i = 0; i < 8; i++) {
        gotoXY(SIZE * 4 + 25, i + 1);
        cout << char(219);
    }
    for (int i = 0; i < 8; i++) {
        gotoXY(SIZE * 4 + 61, i + 1);
        cout << char(219);
    }
    gotoXY(SIZE * 4 + 25, 0);
    for (int i = 0; i < 37; i++) {
        cout << char(220);
    }
    gotoXY(SIZE * 4 + 25, 8 + 1);
    for (int i = 0; i < 37; i++) {
        cout << char(223);
    }

    Textcolor(Red);
    gotoXY(SIZE * 4 + 40, 2);
    cout << "PLAYER 1";
    Textcolor(7);
    gotoXY(SIZE * 4 + 30, 4);
    cout << "So quan X : ";
    gotoXY(SIZE * 4 + 30, 5);
    cout << "So tran da thang : ";


    //Bang 2
    Textcolor(DarkPink);
    gotoXY(SIZE * 4 + 19, (SIZE * 2 - 1) / 2 + 1);
    for (int i = 0; i < 8; i++) {
        gotoXY(SIZE * 4 + 25, 11 + i);
        cout << char(219);
    }
    for (int i = 0; i < 8; i++) {
        gotoXY(SIZE * 4 + 61, 11 + i);
        cout << char(219);
    }
    gotoXY(SIZE * 4 + 25, 10);
    for (int i = 0; i < 37; i++) {
        cout << char(220);
    }
    gotoXY(SIZE * 4 + 25, 11 + 8);
    for (int i = 0; i < 37; i++) {
        cout << char(223);
    }

    Textcolor(Red);
    gotoXY(SIZE * 4 + 40, 12);
    cout << "PLAYER 2";
    Textcolor(7);
    gotoXY(SIZE * 4 + 30, 14);
    cout << "So quan O : ";
    gotoXY(SIZE * 4 + 30, 15);
    cout << "So tran da thang : ";

    // Bang 3
    Textcolor(DarkPink);
    gotoXY(SIZE * 4 + 19, (SIZE * 2 - 1) - 3);
    for (int i = 0; i < 10; i++) {
        gotoXY(SIZE * 4 + 25, SIZE * 2 - i);
        cout << char(219);
    }
    for (int i = 0; i < 10; i++) {
        gotoXY(SIZE * 4 + 61, SIZE * 2 - i);
        cout << char(219);
    }
    gotoXY(SIZE * 4 + 25, SIZE * 2);
    for (int i = 0; i < 37; i++) {
        cout << char(223);
    }
    gotoXY(SIZE * 4 + 25, SIZE * 2 - 10);
    for (int i = 0; i < 37; i++) {
        cout << char(220);
    }

    Textcolor(7);
    gotoXY(SIZE * 4 + 30, 33);
    cout << "-----------------------";
    gotoXY(SIZE * 4 + 30, 34);
    cout << " W A S D : Move ";
    gotoXY(SIZE * 4 + 30, 35);
    cout << " G : Save Game ";
    gotoXY(SIZE * 4 + 30, 36);
    cout << " L : Load Game ";
    gotoXY(SIZE * 4 + 30, 37);
    cout << " ESC : Exit ";

    gotoXY(2, 1);
} // IN BANG DIEM

void PrintCaro()
{
    int x = 50, y = 1;
    //while(true){
    Textcolor(rand() % 15 + 1);
    gotoXY(x, y);                  cout << "carocarocaroc";
    gotoXY(x - 3, y + 1);           cout << "carocarocaro";
    gotoXY(x - 5, y + 2);    cout << "carocarocarocaroca";
    gotoXY(x - 6, y + 3);   cout << "carocarocarocarocar";
    gotoXY(x - 7, y + 4);  cout << "carocaro";
    gotoXY(x - 8, y + 5); cout << "carocaro";
    gotoXY(x - 8, y + 6); cout << "carocaro";
    gotoXY(x - 8, y + 7); cout << "carocaro";
    gotoXY(x - 8, y + 8); cout << "carocaro";
    gotoXY(x - 8, y + 9); cout << "carocaro";
    gotoXY(x - 8, y + 10); cout << "carocaro";
    gotoXY(x - 7, y + 11); cout << "carocaro";
    gotoXY(x - 6, y + 12);  cout << "carocarocarocarocar";
    gotoXY(x - 5, y + 13);   cout << "carocarocarocaroca";
    gotoXY(x - 3, y + 14);      cout << "carocarocarocaro";
    gotoXY(x, y + 15);            cout << "carocarocaroc";
    Textcolor(rand() % 15 + 1);
    gotoXY(x - 4 + 22, y + 4);                  cout << "carocarocaro";
    gotoXY(x - 4 + 22 - 2, y + 5);            cout << "carocarocarocaro";
    gotoXY(x - 4 + 22 - 3, y + 6);           cout << "carocarocarocaroc";
    gotoXY(x - 4 + 22 - 3, y + 7);           cout << "carocarocarocaroc";
    gotoXY(x - 4 + 22 - 3, y + 8);           cout << "caroca     caroca";
    gotoXY(x - 4 + 22 - 3, y + 9);           cout << "caroca     caroca";
    gotoXY(x - 4 + 22 - 3, y + 10);          cout << "caroca     caroca";
    gotoXY(x - 4 + 22 - 3, y + 11);          cout << "carocarocarocaroc";
    gotoXY(x - 4 + 22 - 3, y + 12);          cout << "caroca     caroca";
    gotoXY(x - 4 + 22 - 3, y + 13);          cout << "caroca     caroca";
    gotoXY(x - 4 + 22 - 3, y + 14);          cout << "caroca     caroca";
    gotoXY(x - 4 + 22 - 3, y + 15);          cout << "caroca     caroca";
    Textcolor(rand() % 15 + 1);
    gotoXY(x + 33, y + 4);                   cout << "caroc   carocaroc";
    gotoXY(x + 33, y + 5);                   cout << "carocarocarocaroca";
    gotoXY(x + 33, y + 6);                   cout << "carocarocarocarocar";
    gotoXY(x + 33, y + 7);                    cout << "carocarocarocarocaro";
    gotoXY(x + 1 + 33, y + 8);                 cout << "carocar     carocar";
    gotoXY(x + 1 + 33, y + 9);                 cout << "carocar     carocar";
    gotoXY(x + 1 + 33, y + 10);                cout << "carocar";
    gotoXY(x + 1 + 33, y + 11);                cout << "carocar";
    gotoXY(x + 1 + 33, y + 12);                cout << "carocar";
    gotoXY(x + 1 + 33, y + 13);                cout << "carocar";
    gotoXY(x + 1 + 33, y + 14);                cout << "carocar";
    gotoXY(x + 1 + 33, y + 15);                cout << "carocar";
    Textcolor(rand() % 15 + 1);
    gotoXY(x + 57, y + 4);                  cout << "carocarocaro";
    gotoXY(x + 57 - 2, y + 5);            cout << "carocarocarocar";
    gotoXY(x + 57 - 3, y + 6);           cout << "carocarocarocaroc";
    gotoXY(x + 57 - 3, y + 7);           cout << "carocarocarocaroc";
    gotoXY(x + 57 - 3, y + 8);           cout << "caroca     caroca";
    gotoXY(x + 57 - 3, y + 9);           cout << "caroca     caroca";
    gotoXY(x + 57 - 3, y + 10);          cout << "caroca     caroca";
    gotoXY(x + 57 - 3, y + 11);          cout << "caroca     caroca";
    gotoXY(x + 57 - 3, y + 12);          cout << "carocarocarocaroc";
    gotoXY(x + 57 - 3, y + 13);           cout << "carocarocarocaroc";
    gotoXY(x + 57 - 2, y + 14);           cout << "carocarocarocar";
    gotoXY(x + 57, y + 15);                 cout << "carocarpcaro";
    //system("cls");
    //}
    cout << "\n\n";
}
void box()
{

    int m = 1, n = 0;
    // ngang 60 dài 20
    for (int i = 0; i < 40; i++) {
        gotoXY(m, n + i);
        cout << char(219);
    }
    for (int i = 0; i < 40; i++) {
        gotoXY(m + 149, n + i);
        cout << char(219);
    }
    gotoXY(m, n);
    for (int i = 0; i < 150; i++) {
        cout << char(220);
    }
    gotoXY(m, n + 40);
    for (int i = 0; i < 150; i++) {
        cout << char(223);
    }
}
void About()
{
    system("cls");
    PrintCaro();
    Textcolor(Cyan);
    gotoXY(60, 18);
    cout << "ABOUT";
    gotoXY(50, 21);
    cout << "DO AN GAME CARO - LOP 22CTT4 - HCMUS\n";
    gotoXY(50, 22);
    cout << "GV huong dan:    Truong Toan Thinh\n";
    gotoXY(50, 23);
    cout << "Ho ten:          Pham Tan Nghia               MSSV   : 22120230.\n";
    gotoXY(50, 24);
    cout << "Ho ten:          Tran Duc Minh                MSSV   : 22120212.\n";
    gotoXY(50, 25);
    cout << "Ho ten:          Mai Nhat Nam                 MSSV   : 22120219.\n";
    gotoXY(50, 26);
    cout << "Ho ten:          Hoang Thanh Thao Nguyen      MSSV   : 22120235.\n";
    gotoXY(50, 27);
    cout << "Ho ten:          Vo Thanh Long                MSSV   : 22120195.\n";



    gotoXY(50, 30);
    cout << "Chuc moi nguoi choi game vui ve !!\n";
    gotoXY(60, 31);
    cout << "s: BACK";
    char command = ' ';
    command = _getch();
    system("cls");
}

void Help()
{
    system("cls");
    PrintCaro();
    Textcolor(Cyan);
    gotoXY(60, 18);
    cout << "HELP";
    gotoXY(50, 21);
    cout << "HUONG DAN" << endl;
    gotoXY(50, 22);
    cout << "1. Ban co gom 20x20 o vuong." << endl;
    gotoXY(50, 23);
    cout << "2. Su dung cac phim W A S D de di chuyen va Enter de danh." << endl;
    gotoXY(50, 24);
    cout << "3. Luat choi cu du 5 quan co X hoac O theo hang ngang, doc, cheo se chien thang." << endl;
    gotoXY(50, 25);
    cout << "4. Luat choi tuan theo quy dinh chan 2 dau " << endl;

    gotoXY(50, 30);
    cout << "Chuc moi nguoi choi game vui ve !!" << endl;
    gotoXY(60, 31);
    cout << "s: BACK";
    char command = ' ';
    command = _getch();
    system("cls");
}
void ScreenStartGame() {
    // Set Console Title
    string narrow_str = "Caro Nhom 7";
    int length = MultiByteToWideChar(CP_UTF8, 0, narrow_str.c_str(), -1, NULL, 0);
    std::wstring wide_str(length, L'\0');
    MultiByteToWideChar(CP_UTF8, 0, narrow_str.c_str(), -1, &wide_str[0], length);
    SetConsoleTitle(wide_str.c_str());
    //
    AnTroChuot();
    int x = 50, y = 20;
    int i;
    char s[30] = " ";
    int check = 1;
    box();

    Textcolor(Red);
    gotoXY(50, 20); cout << "Player Vs Player";
    Textcolor(White);
    gotoXY(50, 21); cout << "Player Vs Computer";
    gotoXY(50, 22); cout << "Load Game";
    gotoXY(50, 23); cout << "Lich Su";
    gotoXY(50, 24); cout << "Help";
    gotoXY(50, 25); cout << "About";
    gotoXY(50, 26); cout << "Exit";
    gotoXY(50, 32); cout << "W - S : Move ( Off Unikey - Off Caps Lock ) ";
    gotoXY(50, 33); cout << "Enter : Select ";
    gotoXY(50, 35); cout << "M: mute";

    PrintCaro();
    while (check)
    {
        if (_kbhit())
        {
            switch (_getch())
            {
            case 'm': PlaySound(NULL, NULL, SND_ASYNC);
                ScreenStartGame();

            case 'w':
                PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
                if (y > 20)
                {
                    y--;
                    gotoXY(x, y);
                }
                if (y == 20)
                {
                    box();
                    Textcolor(Red);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    Textcolor(White);
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 21)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    Textcolor(Red);
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    Textcolor(White);
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 22)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    Textcolor(Red);
                    gotoXY(50, 22); cout << "Load Game";
                    Textcolor(White);
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 23)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    Textcolor(Red);
                    gotoXY(50, 23); cout << "Lich Su";
                    Textcolor(White);
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 24)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    Textcolor(Red);
                    gotoXY(50, 24); cout << "Help";
                    Textcolor(White);
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 25)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    Textcolor(Red);
                    gotoXY(50, 25); cout << "About";
                    Textcolor(White);
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 26)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 25); cout << "About";
                    Textcolor(Red);
                    gotoXY(50, 26); cout << "Exit";
                }
                break;
            case 's':
                PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
                if (y < 26)
                {
                    y++;
                    gotoXY(x, y);
                }
                if (y == 20)
                {

                    box();
                    Textcolor(Red);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    Textcolor(White);
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 21)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    Textcolor(Red);
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    Textcolor(White);
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 22)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    Textcolor(Red);
                    gotoXY(50, 22); cout << "Load Game";
                    Textcolor(White);
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 23)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    Textcolor(Red);
                    gotoXY(50, 23); cout << "Lich Su";
                    Textcolor(White);
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 24)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    Textcolor(Red);
                    gotoXY(50, 24); cout << "Help";
                    Textcolor(White);
                    gotoXY(50, 25); cout << "About";
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 25)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 24); cout << "Help";
                    Textcolor(Red);
                    gotoXY(50, 25); cout << "About";
                    Textcolor(White);
                    gotoXY(50, 26); cout << "Exit";
                }
                if (y == 26)
                {

                    box();
                    Textcolor(White);
                    gotoXY(50, 20); cout << "Player Vs Player";
                    gotoXY(50, 21); cout << "Player Vs Computer";
                    gotoXY(50, 22); cout << "Load Game";
                    gotoXY(50, 24); cout << "Help";
                    gotoXY(50, 23); cout << "Lich Su";
                    gotoXY(50, 25); cout << "About";
                    Textcolor(Red);
                    gotoXY(50, 26); cout << "Exit";
                }
                break;
            case 13:
                PlaySound(TEXT("tick.wav"), NULL, SND_FILENAME | SND_ASYNC);
                if (y == 20)
                {

                    Diem a;
                    a.score1 = 0;
                    a.score2 = 0;
                    int t = PlayerVsPlayer(a, 0, s);
                    if (t == 27)
                    {

                        system("cls");
                        ScreenStartGame();
                    }
                }
                if (y == 21)
                {

                    Diem a;
                    a.score1 = 0;
                    a.score2 = 0;
                    int t = PlayerVsCom(a, 0, s);
                    if (t == 27)
                    {

                        system("cls");
                        ScreenStartGame();
                    }
                }
                if (y == 22)
                {
                    LoadLoad();
                }
                if (y == 23)
                {
                    LichSu();
                }
                if (y == 24)
                {
                    Help();
                    ScreenStartGame();
                }
                if (y == 25)
                {
                    About();
                    ScreenStartGame();
                }
                if (y == 26)
                {
                    exit(0);
                }
                break;
            }
        }
    }
}

void drawBoard()
{

    //if (SiZe == 0) return;
    Textcolor(Pink);
    // vẽ cột phải
    for (int i = 0; i < SIZE * 2; i++)
    {
        gotoXY(SIZE * 4, i + 1);
        if ((i + 1) % 2 == 1)
            cout << char(186);
        else
            cout << char(182);
    }

    // vẽ dòng ngang
    for (int i = 0; i < SIZE * 2; i = i + 2)
    {
        gotoXY(0, i);
        for (int j = 0; j < SIZE * 4; j++)
        {
            if (j % 4 == 0)
                cout << char(197);
            else
                cout << char(196);
        }
    }

    // vẽ cột trái
    for (int i = 0; i < SIZE * 2; i++)
    {
        gotoXY(0, i + 1);
        if ((i + 1) % 2 == 1)
            cout << char(186);
        else
            cout << char(199);
    }

    // vẽ cột dọc
    for (int i = 1; i < SIZE * 2; i = i + 2)
    {
        for (int j = 0; j < SIZE * 4; j = j + 4)
        {
            gotoXY(j, i);
            if (j == 0)
                continue;
            cout << char(179);
        }
    }

    // vẽ dòng đầu
    gotoXY(0, 0);
    for (int i = 0; i < SIZE * 4; i++)
    {
        if (i % 4 == 0)
            cout << char(209);
        else
            cout << char(205);
    }
    gotoXY(0, 0); cout << char(201);
    gotoXY(SIZE * 4, 0); cout << char(187);

    // vẽ dòng cuối
    gotoXY(0, SIZE * 2);
    for (int i = 0; i < SIZE * 4; i++)
    {
        if (i % 4 == 0)
            cout << char(207);
        else
            cout << char(205);
    }
    gotoXY(0, SIZE * 2); cout << char(200);
    gotoXY(SIZE * 4, SIZE * 2);
    cout << char(188);

    // về vị trí x y
    gotoXY(2, 1);
}

int ReadChedo(char a[30])
{
    int d1, d2, chedo;
    system("cls");
    ifstream f;
    f.open(a, ios::in);
    if (!f) {
        gotoXY(35, 46);
        cout << "\n FILE KHONG TON TAI!" << endl;
        Sleep(1000);
        ScreenStartGame();
    }
    else
        f >> d1 >> d2 >> chedo;
    f.close();
    return chedo;
}
void LichSu() {
    system("cls");
    Textcolor(Cyan);
    gotoXY(60, 18);
    cout << "LIST FILE NAME LICH SU";
    int i = 19;
    ifstream f;
    f.open("Lich Su.txt", ios::in);
    while (!f.eof())
    {
        string s, s1;
        f >> s;
        f >> s1;
        gotoXY(50, i);
        cout << s << " " << s1;
        i++;
    }
    int y = 31;
    f.close();
    gotoXY(50, 32); cout << "s: back";
    switch (_getch())
    {
    case 's':
        PlaySound(TEXT("move.wav"), NULL, SND_FILENAME | SND_ASYNC);
        y++;
        if (y == 32)
        {
            system("cls");
            ScreenStartGame();
        }
    }
}
void ReadNameFile()
{
    Textcolor(Cyan);
    gotoXY(60, 18);
    cout << "LIST FILE NAME";
    int i = 19;
    ifstream f;
    f.open("Name.txt", ios::in);
    while (!f.eof())
    {
        char s[30];
        f >> s;
        gotoXY(50, i);
        cout << s;
        i++;
    }
    f.close();
}
void LoadLoad()
{
    int n = 100;
    system("cls");
    PrintCaro();
    ReadNameFile();
    char data[30];
    gotoXY(50, 32);
    HienTroChuot();
    cout << "ENTER FILE NAME: ";
    cin.getline(data, 30);
    int chedo = ReadChedo(data);
    if (chedo == -30 || chedo == -31)
    {
        Diem a;
        a.score1 = 0;
        a.score2 = 0;
        int t = PlayerVsPlayer(a, chedo, data);
        if (t == 27)
        {
            system("cls");
            ScreenStartGame();
        }
    }
    if (chedo == -4)
    {
        Diem a;
        a.score1 = 0;
        a.score2 = 0;
        int t = PlayerVsCom(a, -4, data);
        if (t == 27)
        {
            system("cls");
            ScreenStartGame();
        }
    }
}

void P1WIN() {
    AnTroChuot();
    int check = 1;
    Box();
    while (check < 30)
    {
        P1();
        Sleep(200);
        check++;
    }
}
void P2WIN()
{
    AnTroChuot();
    int check = 1;
    Box();
    while (check < 30)
    {
        P2();
        Sleep(200);
        check++;
    }
}
void PDraw()
{
    AnTroChuot();
    int check = 1;
    Box();
    while (check < 30)
    {
        Draw();
        Sleep(200);
        check++;
    }
}

void P1()
{
    int i = 10, j = 2;
    gotoXY(i, j);     cout << " .----------------.  .----------------.   .----------------.  .----------------.  .-----------------.";
    gotoXY(i, j + 1); cout << "| .--------------. || .--------------. | | .--------------. || .--------------. || .--------------. |";
    Textcolor(rand() % 10 + 1);
    gotoXY(i, j + 2); cout << "| |   ______     | || |     __       | | | | _____  _____ | || |     _____    | || | ____  _____  | |";
    gotoXY(i, j + 3); cout << "| |  |_   __ " << char(92) << "   | || |    /  |      | | | ||_   _||_   _|| || |    |_   _|   | || ||_   " << char(92) << "|_   _| | |";
    gotoXY(i, j + 4); cout << "| |    | |__) |  | || |    `| |      | | | |  | | /" << char(92) << " | |  | || |      | |     | || |  |   " << char(92) << " | |   | |";
    gotoXY(i, j + 5); cout << "| |    |  ___/   | || |     | |      | | | |  | |/  " << char(92) << "| |  | || |      | |     | || |  | |" << char(92) << " " << char(92) << "| |   | |";
    gotoXY(i, j + 6); cout << "| |   _| |_      | || |    _| |_     | | | |  |   /" << char(92) << "   |  | || |     _| |_    | || | _| |_" << char(92) << "   |_  | |";
    gotoXY(i, j + 7); cout << "| |  |_____|     | || |   |_____|    | | | |  |__/  " << char(92) << "__|  | || |    |_____|   | || ||_____|" << char(92) << "____| | |";
    gotoXY(i, j + 8); cout << "| |              | || |              | | | |              | || |              | || |              | |";
    Textcolor(rand() % 10 + 1);
    gotoXY(i, j + 9); cout << "| '--------------' || '--------------' | | '--------------' || '--------------' || '--------------' |";
    gotoXY(i, j + 10); cout << " '----------------'  '----------------'   '----------------'  '----------------'  '----------------' ";
}
void P2()
{
    int i = 10, j = 2;
    gotoXY(i, j);     cout << " .----------------.  .----------------.   .----------------.  .----------------.  .-----------------.";
    gotoXY(i, j + 1); cout << "| .--------------. || .--------------. | | .--------------. || .--------------. || .--------------. |";
    Textcolor(rand() % 10 + 1);
    gotoXY(i, j + 2); cout << "| |   ______     | || |    _____     | | | | _____  _____ | || |     _____    | || | ____  _____  | |";
    gotoXY(i, j + 3); cout << "| |  |_   __ " << char(92) << "   | || |   / ___ `.   | | | ||_   _||_   _|| || |    |_   _|   | || ||_   " << char(92) << "|_   _| | |";
    gotoXY(i, j + 4); cout << "| |    | |__) |  | || |  |_/___) |   | | | |  | | /" << char(92) << " | |  | || |      | |     | || |  |   " << char(92) << " | |   | |";
    gotoXY(i, j + 5); cout << "| |    |  ___/   | || |   .'____.'   | | | |  | |/  " << char(92) << "| |  | || |      | |     | || |  | |" << char(92) << " " << char(92) << "| |   | |";
    gotoXY(i, j + 6); cout << "| |   _| |_      | || |  / /____     | | | |  |   /" << char(92) << "   |  | || |     _| |_    | || | _| |_" << char(92) << "   |_  | |";
    gotoXY(i, j + 7); cout << "| |  |_____|     | || |  |_______|   | | | |  |__/  " << char(92) << "__|  | || |    |_____|   | || ||_____|" << char(92) << "____| | |";
    gotoXY(i, j + 8); cout << "| |              | || |              | | | |              | || |              | || |              | |";
    Textcolor(rand() % 10 + 1);
    gotoXY(i, j + 9); cout << "| '--------------' || '--------------' | | '--------------' || '--------------' || '--------------' |";
    gotoXY(i, j + 10); cout << " '----------------'  '----------------'   '----------------'  '----------------'  '----------------' ";
}
void Draw()
{
    int i = 18, j = 2;
    gotoXY(i, j);     cout << " .----------------.  .----------------.  .----------------.  .----------------. ";
    gotoXY(i, j + 1); cout << "| .--------------. || .--------------. || .--------------. || .--------------. |";
    Textcolor(rand() % 10 + 1);
    gotoXY(i, j + 2); cout << "| |  ________    | || |  _______     | || |      __      | || | _____  _____ | |";
    gotoXY(i, j + 3); cout << "| | |_   ___ `.  | || | |_   __  " << char(92) << "   | || |     /  " << char(92) << "     | || ||_   _||_   _|| |";
    gotoXY(i, j + 4); cout << "| |   | |   `. " << char(92) << " | || |   | |__) |   | || |    / /" << char(92) << " " << char(92) << "    | || |  | | /" << char(92) << " | |  | |";
    gotoXY(i, j + 5); cout << "| |   | |    | | | || |   |  __ /    | || |   / ____ " << char(92) << "   | || |  | |/  " << char(92) << "| |  | |";
    gotoXY(i, j + 6); cout << "| |  _| |___.' / | || |  _| |  " << char(92) << " " << char(92) << "_  | || | _/ /    " << char(92) << " " << char(92) << "_ | || |  |   /" << char(92) << "   |  | |";
    gotoXY(i, j + 7); cout << "| | |________.'  | || | |____| |___| | || ||____|  |____|| || |  |__/  " << char(92) << "__|  | |";
    gotoXY(i, j + 8); cout << "| |              | || |              | || |              | || |              | |";
    Textcolor(rand() % 10 + 1);
    gotoXY(i, j + 9); cout << "| '--------------' || '--------------' || '--------------' || '--------------' |";
    gotoXY(i, j + 10); cout << " '----------------'  '----------------'  '----------------'  '----------------' ";
}
void Box()
{
    int i = 8, j = 0;
    Textcolor(Cyan);
    gotoXY(50, j + 18);
    cout << "Y   : Play Again";
    gotoXY(50, j + 19);
    cout << "ESC : BACK";
}