#ifndef TILE_H
#define TILE_H
#include <ostream>
class Tile {
    public:
        Tile(int value): m_value{value}{}

        int getValue() const { return m_value; }

        friend std::ostream& operator<< (std::ostream& out , const Tile& tile);
    private:
        int m_value{};
};


#endif