#include <iostream>
#include "SavingBoolBytes.h"

using namespace std;

int CountZeroBytes(SavingBoolbytes num) {
	int CountZeroBytes = 0;
	for (int i = 0; i < 4; i++) {
		if (num.bytes[i] == false)
			CountZeroBytes++;
	}
	return CountZeroBytes;
}

void PrintBytesInfo(SavingBoolbytes num) {
	for (int i = 0; i < 4; i++) {
		if (num.bytes[i] == false)
			cout << "Byte " << i + 1 << ": " << "zero";
		else
			cout << "Byte " << i + 1 << ": " << "not zero";
		cout << endl;
	}
}