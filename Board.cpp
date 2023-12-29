#include "Board.h"
#include <iostream>

Tile& Board::operator[] (int index){
    return m_board[index];
}

const Tile& Board::operator[] (int index) const{
    return m_board[index];
}

std::ostream& operator<< (std::ostream& out , const Board& board){
    
    for(unsigned i{0} ; i < board.m_board.size() ; i++){
        
        if(i>0 && i%4 == 0) {out << "\n";}
        out << board[i];
        
    }
    return out;
}