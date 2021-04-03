#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleTitleA("");
	std::printf("[+] welcome to BACASABLE, a free BAC (Badlion AntiCheat) HWID (hardware identifier) spoofer...\n\n");
	std::system("pause");

	std::printf("[+] clearing display monitors information from registry...\n");
	std::system("reg delete HKLM\\SYSTEM\\ControlSet001\\Enum\\Display /f");
	std::system("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Enum\\Display /f");

	std::printf("\n[+] spoofing disk identifiers...\n\n");
	std::system("kdmapper.exe spoofer.sys");

	std::printf("\n[+] done...\n");
	std::system("pause > nul");
	
	return 0;
}
