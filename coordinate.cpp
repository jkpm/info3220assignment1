#include "coordinate.h"

Coordinate::Coordinate( unsigned int xCoordinate,
                        unsigned int yCoordinate,
                        unsigned int frameHeight,
                        unsigned int frameWidth )
{
    m_xCoordinate = xCoordinate;
    m_yCoordinate = yCoordinate;
    m_frameHeight = frameHeight;
    m_frameWidth = frameWidth;

}

Coordinate::~Coordinate(){}

int Coordinate::getX() const {
    return m_frameWidth - m_xCoordinate;
}

int Coordinate::getY() const {
    return m_frameHeight - m_yCoordinate;
}

void Coordinate::setX(int offset) {
    m_xCoordinate = offset;
}

void Coordinate::setY(int offset) {
    m_yCoordinate = offset;
}

void Coordinate::changeX(int offset) {
    m_xCoordinate = m_xCoordinate + offset;
}

void Coordinate::changeY(int offset) {
    m_yCoordinate = m_yCoordinate + offset;
}
unsigned int Coordinate::getFrameHeight() const {
    return m_frameHeight;
}

unsigned int Coordinate::getFrameWidth() const {
    return m_frameWidth;
}
