#include "n_queens.hpp"

namespace n_queens {
    void initMatrix(int *matrix, int init_value, size_t height, size_t width){
        memset(matrix, init_value, sizeof(int) * height * width);
    }

    void subMatrix(int *matrix, int *sub_matrix, size_t sub_height, size_t sub_width){
        size_t h, w;

        for(h = 0; h < sub_height; h++){
            for(w = 0; w < sub_width; w++){
                *(sub_matrix + h * sub_width + w) = *(matrix + (h + 1) * sub_width + w);
            }
        }
    }

    void printMatrix(int *v, size_t height, size_t width){
        size_t h, w;

        for(h = 0; h < height; h++){
            for(w = 0; w < width; w++){
                printf("%2d ", *(v + h * width + w));
            }

            printf("\n");
        }
    } 

    void put(int *board, size_t height, size_t width, size_t pos){
        size_t h = 0, w;

        for(w = 0; w < width; w++){
            if(w == pos){
                *(board + h * width + w) = 1;
            }
            else{
                *(board + h * width + w) = -1;
            }        
        }
        
        for(h = 1; h < height; h++){
            *(board + h * width + pos) = -1;        
        }
        
        mask(board, height, width, pos, 1, -1);
        mask(board, height, width, pos, 1, 1);
    }

    void mask(int *board, size_t height, size_t width, size_t pos, int dh, int dw){
        size_t h, w;
        
        // 若同一直列有棋子，則不符規則
        for(h = 0, w = pos; (0 <= h) && (h < height) && (0 <= w) && (w < width); h += dh, w += dw){
            std::cout << "(" << h << ", " << w << ")" << std::endl;
            
            if(h == 0 && w == pos){
                continue;
            }
            
            *(board + h * width + w) = -1;
        }
    }

    std::vector<int> findIndexs(int *board, size_t width){
        std::vector<int> indexs;
        
        for(int w = 0; w < width; w++){
            if(*(board + w) == 0){
                indexs.push_back(w);
            }
        }
        
        return indexs;
    }
}