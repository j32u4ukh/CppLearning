#include "n_queens.hpp"

namespace n_queens {
    template <typename T, size_t N>
    void initMatrix(T matrix[N][N], int init_value, size_t rows){
        // std::cout << "N:" << N << std::endl;
        // std::cout << "sizeof(T):" << sizeof(T) << std::endl;
        // std::cout << "__n:" << sizeof(T) * N << std::endl;
        if(rows == 0){
            memset(matrix, init_value, sizeof(T) * N * N);
        }else{
            memset(matrix, init_value, sizeof(T) * N * rows);
        }
    }   
}