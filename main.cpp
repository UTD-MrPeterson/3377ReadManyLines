#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>

void readCPlusPlusWay() {
    // From video https://www.youtube.com/watch?v=MHBG_R_dhwk
    std::string inputLine;
    long lineCount = 0;

    /*while(true) {
        std::getline(std::cin, inputLine);
        lineCount++;
        if ( std::cin.eof()) {
            break;
        }
    }
    std::cout << "Line count is " << lineCount << std::endl;
    */

    std::ifstream inStream;
    inStream.open("input");

    std::string line;
    while(true) {
        std::getline(inStream,line);
        if ( inStream.fail()) {
            break;
        }
        lineCount++;
    }
    std::cout << "Line count is " << lineCount << std::endl;

}

void readCWay() {
    long lineCount = 0;

    char inputLine[100];
    int character;

    /*while ( true) {
        gets(inputLine);
        //printf("%s\n", inputLine);
        lineCount++;
        if ((character = getc(stdin))==EOF) {
            break;
        }
        ungetc(character, stdin);
    }*/

    FILE* inputFile = fopen("input", "r");
    if ( inputFile==nullptr) {
        printf("Failed to open file: %s\n", strerror(errno));
        exit(1);
    }
    while (true) {
        if ( fgets(inputLine, 100, inputFile) == nullptr) {
            break;
        }
        lineCount++;
    }
    printf("Line count is %ld\n", lineCount);
}

int main(int argc, char** argv) {
    if ( argc < 2) {
        std::cerr << "Need a type (C or C++)";
        exit(1);
    }

    if ( strcmp(argv[1], "C") == 0) {
        readCWay();
    } else {
        readCPlusPlusWay();
    }
    return 0;
}
