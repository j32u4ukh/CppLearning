#ifndef _N_QUEENS_HPP_
#define _N_QUEENS_HPP_
#pragma once

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>

namespace n_queens {
    void initMatrix(int *matrix, int init_value, size_t height, size_t width); 
    void subMatrix(int *matrix, int *sub_matrix, size_t sub_height, size_t sub_width);

    void printMatrix(int *v, size_t height, size_t width);
    void put(int *board, size_t height, size_t width, size_t pos);
    void mask(int *board, size_t height, size_t width, size_t pos, int dh, int dw);
    std::vector<int> findIndexs(int *board, size_t width);
}

#endif // _N_QUEENS_HPP_