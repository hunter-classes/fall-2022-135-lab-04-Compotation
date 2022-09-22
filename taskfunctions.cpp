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
