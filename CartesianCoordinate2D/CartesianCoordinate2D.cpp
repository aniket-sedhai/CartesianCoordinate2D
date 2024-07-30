//
//  CartesianCoordinate2D.cpp
//  CartesianCoordinate2D
//
//  Created by Aniket Sedhai on 6/22/24.
//

#include "CartesianCoordinate2D.h"

//Constructor
CartesianCoordinate2D::CartesianCoordinate2D():
    x(0.0),
    y(0.0)
{
    
}

CartesianCoordinate2D::CartesianCoordinate2D(double X, double Y):
    x(X),
    y(Y)
{
    
}

//Copy constructor
CartesianCoordinate2D::CartesianCoordinate2D(const CartesianCoordinate2D& rhs):
    x(rhs.x),
    y(rhs.y)
{
    
}

double CartesianCoordinate2D::GetX(void) const
{
    return x;
}

double CartesianCoordinate2D::GetY(void) const
{
    return y;
}

void CartesianCoordinate2D::SetX(double x_val)
{
    x = x_val;
}

void CartesianCoordinate2D::SetY(double y_val)
{
    y = y_val;
}

double CartesianCoordinate2D::get_point_distance_from_origin(void) const
{
    return sqrt((x*x) + (y*y));
}

int CartesianCoordinate2D::get_quadrant(void) const
{
    if ((x == 0) || (y == 0))
        return 0;
    else if (x > 0)
    {
        if (y > 0)
            return 1;
        else
            return 4;
    }
    else
    {
        if (y > 0)
            return 2;
        else
        {
            return 3;
        }
    }
}

CartesianCoordinate2D& CartesianCoordinate2D::operator =(const CartesianCoordinate2D& rhs)
{
    x = rhs.x;
    y = rhs.y;
    
    return *this;
}

CartesianCoordinate2D CartesianCoordinate2D::operator -(const CartesianCoordinate2D& rhs) const
{
    return CartesianCoordinate2D(x - rhs.x, y - rhs.y);
}

CartesianCoordinate2D& CartesianCoordinate2D::operator -=(const CartesianCoordinate2D& rhs)
{
    x = x - rhs.x;
    y = y - rhs.y;
    
    return *this;
}

std::ostream& operator <<(std::ostream& ostr, const CartesianCoordinate2D& rhs)
{
    ostr << "(" << rhs.x << ", " << rhs.y << ")";
    return ostr;
}

bool CartesianCoordinate2D::operator >(const CartesianCoordinate2D& rhs) const
{
    return (get_point_distance_from_origin() > rhs.get_point_distance_from_origin());
}
