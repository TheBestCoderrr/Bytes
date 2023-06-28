#pragma once
#include "SavingCharBytes.h"

union SavingCharBytes {
	int num;
	char bytes[5];
};