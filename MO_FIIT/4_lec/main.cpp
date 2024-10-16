#include <iostream>
#include <io.h>
#include <fcntl.h>
#include <windows.h>

int wmain(int argc, wchar_t* argv[])
{
	SetConsoleOutputCP(CP_UTF8);

	std::cout << "Привет, мир!" << std::endl;
    /*
	_setmode(_fileno(stdout), _O_U16TEXT);
    _setmode(_fileno(stdin),  _O_U16TEXT);
    _setmode(_fileno(stderr), _O_U16TEXT);

	std::wstring str = L"Привет, мир!";
    std::wcout << L"Unicode -- English -- Русский -- Ελληνικά -- Español. " << str[1] << " " << str.length() << std::endl;
    // или
    wprintf(L"%s", L"Unicode -- English -- Русский -- Ελληνικά -- Español.\n");
	*/

    return 0;
}