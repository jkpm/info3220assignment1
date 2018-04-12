#include "ball.h"

Ball::Ball(Coordinate coordinate) : m_coordinate(0,0,0,0) {
    m_coordinate = coordinate;
}

Ball::Ball(Coordinate coordinate, int radius) : m_coordinate(0,0,0,0){
    m_coordinate = coordinate;
    m_radius = radius;
}

Ball::Ball(Coordinate coordinate, int radius, double xVel, double yVel, std::string colour) : m_coordinate(0,0,0,0){
    m_coordinate = coordinate;
    m_radius = radius;
    m_xVel = xVel;
    m_yVel = yVel;
    m_colour = colour;
}

Ball::~Ball() {}

unsigned int Ball::getRadius() const {
    return m_radius;
}

bool Ball::topColl() const {
    return m_coordinate.getY() < (signed int)(m_radius);
}

bool Ball::bottomColl() const {
    return m_coordinate.getY() > (signed int)(m_coordinate.getFrameHeight())-(signed int)(m_radius);
}

bool Ball::rightColl() const {
    return m_coordinate.getX() > (signed int)(m_coordinate.getFrameWidth()) - (signed int)(m_radius);
}

bool Ball::leftColl() const {
    return m_coordinate.getX() - (signed int)(m_radius) < 0;
}

void Ball::render(QPainter painter) {
    if(topColl()) {
        m_yVel = m_yVel*-1;
    } else if (bottomColl()) {
        m_yVel = m_yVel*-1;
    } else if (rightColl()) {
        m_xVel = m_xVel*-1;
    } else if (leftColl()) {
        m_xVel = m_xVel*-1;
    }
    painter.setPen(Qt::black);
    painter.setBrush(QBrush(QColor(Qt::red)));

    painter.drawEllipse(m_coordinate.getX() - (int)(m_radius),
                        m_coordinate.getY() - (int)(m_radius),
                        m_radius*2,
                        m_radius*2);
    m_coordinate.changeX(m_xVel);
    m_coordinate.changeY(m_yVel);
}
