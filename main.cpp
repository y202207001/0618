#include "user.h"
#include <windows.h>

int main(){
	SetConsoleOutputCP(CP_UTF8);  // �ܼ� ��� UTF-8 ����

	login();
	showProf13ile();
	logout();
	
	return 0;
}
