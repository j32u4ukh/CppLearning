#include <iostream>
#include <string.h>
#include <vector>

#include "utils.hpp"
#include "n_queens.hpp"

using namespace std;

const size_t size = 8;

bool nQueens(int *board, size_t height, size_t pos){
    // int board[size][size];
    // n_queens::initMatrix((int *)board, 0, size, size);
    // n_queens::printMatrix((int *)board, size, size);
    // n_queens::put((int *)board, size, size, 3);
    // cout << "=====" << endl;
    // n_queens::printMatrix((int *)board, size, size);

    // int sub_board[size - 1][size];
    // n_queens::subMatrix((int *)board, (int *)sub_board, size - 1, size);

    // cout << "===== subMatrix =====" << endl;
    // n_queens::printMatrix((int *)sub_board, size - 1, size);
    // std::vector<int> indexs = n_queens::findIndexs((int *)sub_board, size);
    // cout << utils::vector::toString(indexs) << endl;


    // std::vector<int> indexs = n_queens::findIndexs((int *)board, size);

    // if(height == 1 && indexs.size() > 0){
    //     return true;
    // }else{
    //     vector<int>::const_iterator it;
    //     bool available_board = false;

    //     for(it = indexs.begin(); it != indexs.end(); ++it) {
    //         int sub_board[height - 1][size];
    //         n_queens::subMatrix((int *)board, (int *)sub_board, height - 1, size);

    //         available_board = nQueens((int *)sub_board, height - 1, *it);
    //     }
    // }

    // if(height > 1){
        

    //     if(indexs.size() > 0){
            
    //     }else{

    //     }
    // }

    return true;
}

int main(int argc, char** argv){
      
}