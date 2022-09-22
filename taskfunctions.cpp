#include "taskfunctions.h"
#include <iostream>

std::string box(int width, int height) {
    std::string line(width, '*');
    line += "\n";
    std::string lines;
    for (int i = 0; i < height; i++) {
        lines += line;
    }
    return "Shape:\n" + lines;
}

std::string checkerboard(int width, int height) {
    std::string lines = "";
    for (int row = 0; row < height; row++) {
        for (int col = 0; col < width; col++) {
            if (row % 2 == 0) {
                if (col % 2 == 0) {
                    lines += "*";
                } else {
                    lines += " ";
                }
            } else {
                if (col % 2 == 1) {
                    lines += "*";
                } else {
                    lines += " ";
                }
            }
        }
        // new row
        lines += "\n";
    }
    return lines;
}

std::string  cross(int size) {
    std::string lines = "";
    char linesarray[size][size];
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            linesarray[row][col] = ' ';
        }
    }
    for (int row = 0; row < size; row++) {
        linesarray[row][row] = '*';
        linesarray[row][size-1-row] = '*';
    }
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            lines += linesarray[row][col];
        }
        lines += "\n";
    }

    return lines;
}
