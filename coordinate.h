#ifndef COORDINATE_H
#define COORDINATE_H


class Coordinate
{
public:
    Coordinate(unsigned int xCoordinate,
               unsigned int yCoordinate,
               unsigned int frameHeight,
               unsigned int frameWidth);
    /*
     *  Destructor
     */
    ~Coordinate();

    int getX() const;
    int getY() const;

    void setY(int offset);
    void setX(int offset);

    void changeX(int offset);
    void changeY(int offset);

    unsigned int getFrameHeight() const;
    unsigned int getFrameWidth() const;


private:
    unsigned int m_xCoordinate;
    unsigned int m_yCoordinate;
    unsigned int m_frameHeight;
    unsigned int m_frameWidth;

};

#endif // COORDINATE_H
