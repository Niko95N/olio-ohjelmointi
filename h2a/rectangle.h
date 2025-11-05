#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    ~Rectangle();
    double getWidth() const;
    void setWidth(double newWidth);
    double getHeight() const;
    void setHeight(double newHeight);
    double getArea();
    double getCircum();
};

#endif // RECTANGLE_H
