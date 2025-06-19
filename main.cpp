#include "user.h"
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);  // 콘솔 출력 UTF-8 설정

	login();
	showProf13ile();
	logout();
	
	return 0;
}
