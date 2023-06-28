#include <iostream>

#include "Exersize1.h"
#include "SavingCharBytes.h"
#include "SignedUnsignedNum.h"
#include "Exersize3.h"
#include "SavingBoolBytes.h"

using namespace std;

template <typename T>
void SetNum(T& num) {
    cout << "Enter num: ";
    cin >> num.num;
}

int main() {
    SavingCharBytes charbytes;
    SetNum(charbytes);

    charbytes.bytes[4] = '\0';
    PrintBytesNum(charbytes);

    int byte;
    cout << "Enter byte(1-4): ";
    cin >> byte;
    PrintByteNum(charbytes, byte);

    PrintBinBytes(charbytes);
    PrintHexBytes(charbytes);

    SignedUnsignedNums signednum;

    cout << "Enter num: ";
    cin >> signednum.SignedNum;
    cout << "Signed Value: " << signednum.SignedNum << endl;
    cout << "Unsigned Value: " << signednum.UnsignedNum << endl;

    
    SavingBoolbytes boolbytes;
    
    SetNum(boolbytes);
    cout << "Count Zero bytes = " << CountZeroBytes(boolbytes) << endl;

    PrintBytesInfo(boolbytes);
}