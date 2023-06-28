#include <iostream>
#include <string.h>
#include "SavingCharBytes.h"
#include <bitset>

using namespace std;

void PrintBytesNum(SavingCharBytes charbytes) {
	for (int i = 0; i < 4; i++)
		cout << "Byte " << i + 1 << " = " << int(charbytes.bytes[i]) << endl;
}

void PrintByteNum(SavingCharBytes charbytes, const int byte) {
	cout << "Byte " << byte << " = " << int(charbytes.bytes[byte - 1]) << endl;
}

void PrintBinBytes(SavingCharBytes charbytes) {
    for (int i = 0; i < 4; i++)
        cout << bitset<8>(charbytes.bytes[i]) << " ";
    cout << endl;
}

void PrintHexBytes(SavingCharBytes charbytes) {
    for (int i = 0; i < 4; i++)
        cout << hex << int(charbytes.bytes[i]) << " ";
    cout << endl;
}