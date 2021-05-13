#ifndef _N_QUEENS_HPP_
#define _N_QUEENS_HPP_
#pragma once

#include <string.h>

namespace n_queens {
    template <typename T, size_t N>
    void initMatrix(T matrix[][N], int init_value = 0, size_t rows = 0); 
}

#endif // _N_QUEENS_HPP_