#ifndef BALL_H
#define BALL_H

#include "coordinate.h"
#include <QPainter>


class Ball
{
public:
    Ball();
    Ball(Coordinate coordinate);
    Ball(Coordinate coordinate, int radius);
    Ball(Coordinate coordinate,
         int radius,
         double xVel,
         double yVel,
         std::string colour);

    ~Ball();

    void render(QPainter painter);

    bool topColl() const;
    bool bottomColl() const;
    bool rightColl() const;
    bool leftColl() const;

    unsigned int getRadius() const;


private:
    Coordinate m_coordinate;
    unsigned int m_radius;
    double m_xVel;
    double m_yVel;
    std::string m_colour;
};

#endif // BALL_H
