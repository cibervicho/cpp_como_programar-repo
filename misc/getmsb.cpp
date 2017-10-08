// Example on how to obtain the MSB (Most Significant Bit) from an any sized number.
// Simple getmsb() function that relies on right-shift that will handle all cases for positive
// numbers.
// By designating input as unsigned long long it can handle all number classes from unsigned char
// to unsigned long long and given the standard definition, it is compatible across x86_64 and x86
// builds.
// The case for 0 is defined to return 0, but can be changed as required.
//
// Source: https://stackoverflow.com/questions/2589096/find-most-significant-bit-left-most-that-is-set-in-a-bit-array
#include <iostream>
#include <stdio.h>

using namespace std;

int getmsb (unsigned long long x)
{
    int r = 0;
    if (x < 1) return 0;
    while (x >>= 1) r++;
    return r;
}

long long getMask(int rangeSize)
{
    //long long testBase = 0;
    //long long exclMask = (~(testBase + rangeSize - 1) | (1 << getmsb(rangeSize-1)));
    long long exclMask = ((1 << getmsb(rangeSize-1)) * -1);
    return exclMask;
}

int main (void)
{
    unsigned char      c0  = 0;
    unsigned char      c   = 216;
    unsigned short     s   = 1021;
    unsigned int       ui  = 32768;
    unsigned long      ul  = 3297381253;
    unsigned long long ull = 9223372036854775807;

    int i = 32767;

    //cout << "  " << c0  << "\t\t\tMSB: " << getmsb(c0) << endl;
    //cout << "  " << c   << "\t\t\tMSB: " << getmsb(c) << endl;
    printf ("  %1u\t\t\tMSB: %d\n", c0, getmsb (c0));
    printf ("  %1u\t\t\tMSB: %d\n", c, getmsb (c));
    cout << "  " << s   << "\t\t\tMSB: " << getmsb(s) << endl;
    cout << "  " << i   << "\t\t\tMSB: " << getmsb(i) << endl;
    cout << "  " << ui  << "\t\t\tMSB: " << getmsb(ui) << endl;
    cout << "  " << ul  << "\t\tMSB: " << getmsb(ul) << endl;
    cout << "  " << ull << "\tMSB: " << getmsb(ull) << endl << endl;

    i = 1048576;
    cout << "Mask of '" << i << "': " << getMask(i) << endl << endl;

    return 0;
}
