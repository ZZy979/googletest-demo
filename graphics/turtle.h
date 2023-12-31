#pragma once

class Turtle {
public:
    virtual ~Turtle() = default;

    virtual void PenUp() = 0;
    virtual void PenDown() = 0;
    virtual void Forward(int distance) = 0;
    virtual void Circle(int radius) = 0;
    virtual void Turn(int degrees) = 0;
    virtual void GoTo(int x, int y) = 0;
    virtual void Head(int angle) = 0;
    virtual int GetX() const = 0;
    virtual int GetY() const = 0;
};
