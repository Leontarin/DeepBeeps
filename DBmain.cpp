#include "DBFunctions.h"

int DBmain(){
	cls();
	SetConsoleTitle("DeepBeeps - Beep Music Player");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0x0b);
	const std::string versionInfo = "Version 0.1.2.4 - Crow Edition";
	const std::string list[] = {"AshCrow","\0"};
	std::string input;
	while(1){
		cls();
		std::cout << "----------[ [LeOS] DeepBeeps " << versionInfo << " ]----------\n\n";
		std::cout << "Insert the Song you wish to Play ('list' for song list)\n" << "Song: ";
		std::cin >> input;
		std::cout << "\n\n";
		for(int i=0;list[i]!="\0";i++){
			if(input=="list"){
				std::cout << list[i] << ", ";
				getch();
				break;
			}
			if(input=="exit"){
				return 0;
				break;
			}
			if(input==list[i]){
				if(input=="AshCrow"){
					std::cout << "Now playing: AshCrow\n";
					std::cout << "Notes: A A ABE, A A BCBCD, E C - E C, C C ABA\n" << "       A A AB E(LOWER), A A BCBCD, E C - E C, C C ABA";
					AshCrow();
					break;
				}
				//you can add more Music Functions in DBFunctions.cpp
				std::cout << "The Track has ended.";
				getch();	
			}
		}
		
	}
}

int main(){
	DBmain();
	return 0;
}
