#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    char str[256] = "Saat ini sedang melakukan penelitian 74648";
    char* end;
    long result;

    result = strtoul(str, &end, 36);
    cout << "The unsigned long integer is : " << result << endl;
    cout << "String in str is : " << end;

    _getch();
    return 0;
}