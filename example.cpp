/* MIT License
#
# Copyright (c) 2020 Ferhat Geçdoğan All Rights Reserved.
# Distributed under the terms of the MIT License.
#
# */

#include <iostream>
#include <unistd.h>
#include "ExecutePlusPlus.hpp"

int main() {
	ExecutePlusPlus ex;
	ex.ExecuteName("HelloExecute++");
	ex.RunFunction("uname -a");
	ex.RunFunction("xdg-open https://github.com/FerhatGec");
	return 0;
}
