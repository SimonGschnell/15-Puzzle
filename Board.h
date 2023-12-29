#ifndef BOARD_H
#define BOARD_H
#include "Tile.h"
#include <vector>
#include <ostream>



class Board{
public:
    Board(){
        
        for(unsigned int i = 0; i < 16; i++){
            m_board.push_back(Tile{static_cast<int>(i)});
            
        }
    }

    Tile& operator[] (int index);
    const Tile& operator[] (int index) const;
    friend std::ostream& operator<< (std::ostream& out , const Board& board);

private:
    std::vector<Tile> m_board{};

};


#endif