#include "func.h"
#include <iostream>

namespace myFunc{
    void Read(char s[100]){
        std::cout << "Enter the word:";
        std::cin >> s;
    }
    char fromBigToSmall(char s[100], char small[100]){
        for(int i=0; i<strlen(s);i++){
            if (s[i] >= 65 && s[i] <= 90)
                small[i] = s[i] + 32;
            else
                small[i] = s[i];
        }
    }
    char fromSmallToBig(char s[100], char big[100]){
        for(int i=0; i<strlen(s);i++){
            if (s[i] >= 97 && s[i] <= 122)
                big[i] = s[i] - 32;
            else
                big[i] = s[i];
        }
    }
    char maxSymbol(int symbols[256], int maxsymb, char& maxSymbol, char s[100]){
        for (int i = 0; i < 256; i++)
            symbols[i] = 0;

        for(int i=0; i<strlen(s);i++){
            symbols[s[i]]++;
        }
        for(int i=0; i<strlen(s);i++){
            if(symbols[s[i]] > maxsymb) {
                maxsymb = symbols[s[i]];
                maxSymbol = s[i];
            }
        }
    }
}

