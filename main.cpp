#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

void readCWay() {
    long lineCount = 0;

    char inputLine[100];
    int character;

    while ( true) {
        gets(inputLine);
        //printf("%s\n", inputLine);
        lineCount++;
        if ((character = getc(stdin))==EOF) {
            break;
        }
        ungetc(character, stdin);
    }
    printf("Line count is %ld\n", lineCount);
}

void readCPlusPlusWay() {
    // From video https://www.youtube.com/watch?v=MHBG_R_dhwk
    std::string inputLine;
    long lineCount = 0;

    while(true) {
        std::getline(std::cin, inputLine);
        lineCount++;
        if ( std::cin.eof()) {
            break;
        }
    }
    std::cout << "Line count is " << lineCount << std::endl;
}

int main(int argc, char** argv) {
    if ( argc < 2) {
        std::cerr << "Need a type (C or C++)";
    }

    if ( strcmp(argv[1], "C") == 0) {
        readCWay();
    } else {
        readCPlusPlusWay();
    }
    return 0;
}
