#include "Tile.h"
#include <iomanip>

std::ostream& operator<< (std::ostream& out , const Tile& tile){
    if(tile.m_value > 0){
        out << std::setw(4) << tile.m_value ;
    }else{
        out << std::setw(4) << "";
    }
    return out;
}