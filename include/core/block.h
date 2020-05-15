#ifndef BLOCK_H
#define BLOCK_H

#include <QObject>

class Block
{
public:
    Block();
    Block(uint16_t);
    Block(uint16_t tile, uint16_t collision, uint16_t elevation);
    Block(const Block&);
    bool operator ==(Block);
    bool operator !=(Block);
    uint16_t tile:10;
    uint16_t collision:2;
    uint16_t elevation:4;
    uint16_t rawValue();
};

#endif // BLOCK_H
