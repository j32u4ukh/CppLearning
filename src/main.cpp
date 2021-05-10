#include <iostream>
#include <string.h>
#include <vector>

#include "leetcode/utils.hpp"

using namespace std;

const int size = 8;

template <typename T, size_t N>
void initBoard(T board[N][N], int size, int init_value);

template <typename T, size_t N>
void printBoard(T board[N][N]);

template <typename T, size_t N>
void printMatrix(T board[][N], int rows);

template <typename T>
void printVector(vector<T> v);

vector<int> findIndexs(int board[][size]);

void put(int board[][size], int height, int pos);

template <typename T>
void subMatrix(T matrix[][size], T sub_matrix[][size], size_t rows);

void mask(int board[][size], size_t height, int pos, int dh, int dw);

// ==================================================
// ==================================================

int main(int argc, char** argv){
    int board[size][size] = {{0}};
    int height = sizeof(board) / sizeof(board[0]);
    
    cout << "Origin" << endl;
    printMatrix(board, height);
    put(board, height, 3);
    
    cout << "Put (0, 3)" << endl;
    printMatrix(board, height);
    
    
    height -= 1;
    int board1[height][size];
    subMatrix(board, board1, height);
    vector<int> index = findIndexs(board1);
    cout << "findIndexs" << endl;
    printVector(index);    
    
    cout << "board1" << endl;
    printMatrix(board1, height);
    put(board1, height, index[0]);
    
    cout << "Put (1, "<< index[0] << ")" << endl;
    printMatrix(board1, height);
    
}

// ==================================================
// ==================================================

template <typename T, size_t N>
void initBoard(T board[N][N], int size, int init_value)
{
    memset(board, init_value, sizeof(T) * size);    
}

template <typename T, size_t N>
void printBoard(T board[N][N]){
    int h, w;
    
    for(h = 0; h < N; h++){
        
        for(w = 0; w < N; w++){
            
            cout << board[h][w] << " ";
        }
        
        cout << endl;
    }
}

template <typename T>
void printVector(vector<T> v){
    int i, num = v.size();
    cout << "[";
    
    for(i = 0; i < num - 1; i++){
        cout << v[i] << ", ";
    }
    
    cout << v[num - 1] << "]" << endl;
}

template <typename T, size_t N>
void printMatrix(T board[][N], int rows){
    int h, w, H = rows;
    
    for(h = 0; h < H; h++){
        
        for(w = 0; w < size; w++){
            
            cout << board[h][w] << " ";
        }
        
        cout << endl;
    }
}

vector<int> findIndexs(int board[][size]){
    vector<int> index;
    
    for(int w = 0; w < size; w++){
        if(board[0][w] == 0){
            index.push_back(w);
        }
    }
    
    return index;
}

void put(int board[][size], int height, int pos){
    for(int w = 0; w < size; w++){
        if(w == pos){
            board[0][w] = 1;
        }else{
            board[0][w] = -1;
        }        
    }
    
    for(int h = 1; h < height; h++){
        board[h][pos] = -1;        
    }
    
    mask(board, height, pos, 1, -1);
    mask(board, height, pos, 1, 1);
}

template <typename T>
void subMatrix(T matrix[][size], T sub_matrix[][size], size_t rows){
    size_t row, col;
    
    for(row = 0; row < rows; row++){
        for(col = 0; col < size; col++){
            sub_matrix[row][col] = matrix[row + 1][col];
        }
    }
}

void mask(int board[][size], size_t height, int pos, int dh, int dw){
    size_t h, w;
    
    // 若同一直列有棋子，則不符規則
    for(h = 0, w = pos; (0 <= h) && (h < height) && (0 <= w) && (w < size); h += dh, w += dw){
        cout << "(" << h << ", " << w << ")" << endl;
        
        if(h == 0 && w == pos){
            continue;
        }
        
        board[h][w] = -1;
    }
}