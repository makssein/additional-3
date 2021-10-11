/*Дано слово длиной не более 100 символов. 
Напишите функции, которые преобразует все 
его буквы в строчные и в прописные. 
Определите наиболее часто встречающуюся букву в слове.
*/

#include <iostream>
#include "func.h"



int main() {
    char s[100];
    char small[100] = {};
    char big[100] = {};
    char maxSymbol;
    int symbols[256];
    int maxsymb = 0;

    myFunc::Read(s);
    myFunc::fromBigToSmall(s, small);
    myFunc::fromSmallToBig(s, big);
    myFunc::maxSymbol(symbols, maxsymb, maxSymbol, s);




    std::cout << big << ":" << small << ":" << maxSymbol;
    return 0;
}
