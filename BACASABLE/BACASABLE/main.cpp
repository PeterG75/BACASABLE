#include <windows.h>
#include <iostream>

int main() {
	SetConsoleTitleA("");
	std::printf("[+] Welcome to BACASABLE, a free BAC (Badlion AntiCheat) HWID (hardware identifier) spoofer...\n\n");
	std::system("pause");

	std::printf("[+] Clearing display monitor information from registry...\n");
	std::system("reg delete HKLM\\SYSTEM\\ControlSet001\\Enum\\Display /f");
	std::system("reg delete HKLM\\SYSTEM\\CurrentControlSet\\Enum\\Display /f");

	std::printf("\n[+] Spoofing disk identifiers...\n\n");
	std::system("kdmapper.exe spoofer.sys");

	std::printf("\n[+] Finished spoofing!\n");
	std::system("pause > nul");
	
	return 0;
}
