#ifndef TABLE_H
#define TABLE_H

#include <QPainter>

class Table
{
public:
    Table( int width,
           int height,
           std::string colour,
           int friction);

    ~Table(){}

    int getHeigh() const;
    int getWidth() const;
    int getColour() const;
    int getFriction() const;

    void render(QPainter painter);

private:
    int m_width;
    int m_height;
    std::string m_colour;
    int m_friction;
};

#endif // TABLE_H
