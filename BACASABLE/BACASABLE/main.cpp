#include <Windows.h>
#include <iostream>

int main()
{
	SetConsoleTitleA("");
	std::printf("[+] welcome to BACASABLE, a free BAC (Badlion AntiCheat) HWID (hardware identifier) spoofer...\n\n");
	system("pause");

	std::printf("[+] clearing display monitors information from registry...\n");
	system("reg delete HKLM\\SYSTEM\\ControlSet001\\Enum\\Display /f");
	system("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Enum\\Display /f");

	std::printf("[+] spoofing disk identifiers...\n");
	system("kdmapper.exe spoofer.sys");

	std::printf("[+] done...\n");
	return 0;
}