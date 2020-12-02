#include <stdio.h>
#include <unistd.h>
#include "ExecutePlusPlus.h"

int main() {
	RunFunction("ExecuteC", "uname -a");
	RunFunction("ExecuteC", "xdg-open https://github.com/ferhatgec");
	
	printf("Output: %s\n", ExecWithOutput("uname"));	
	
	return 0;
}
