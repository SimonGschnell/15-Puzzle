#include <iostream>
#include "Tile.h"
#include "Board.h"
#include <string>
#include <string_view>

enum Move{ w, d, s, a };

std::istream& operator>> (std::istream& in , Move e){
    std::string move{};
    in >> move;
    return in;
}

int main(){

    Board board{};    
    std::cout << board;
    

    Move move{};
    //* main loop
    while(true){
        std::cout << "\nPlease enter a move (w, a, s, d): ";
        std::cin >> move; 
    }
    std::cout << std::endl;
}