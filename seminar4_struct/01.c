#include <stdio.h>
#include <math.h>

struct point 
{
    double x;
    double y;
};
typedef struct point Point;

struct triangle 
{
    Point a;
    Point b;
    Point c;
};
typedef struct triangle Triangle;

void print_point(Point p)
{
    printf("(%.2f, %.2f)\n", p.x, p.y);
}

void print_triangle(Triangle* pt)
{
    printf("{(%.2f, %.2f), (%.2f, %.2f), (%.2f, %.2f)}\n", pt->a.x, pt->a.y, pt->b.x, pt->b.y, pt->c.x, pt->c.y);
}

double distance(Point a, Point b)
{
    double distance;
    distance = pow((pow((a.x - b.x), 2) + pow((a.y - b.y), 2)), 0.5);
    return distance;
}

double get_triangle_perimeter(const Triangle* pt)
{
    double perimetr;
    perimetr = distance(pt->a, pt->b) + distance(pt->b, pt->c) + distance(pt->c, pt->a);
    return perimetr;
}

Triangle moved_triangle(const Triangle* pt, Point p)
{
    Triangle moved = {{(pt->a).x + p.x, (pt->a).y + p.y}, {(pt->b).x + p.x, (pt->b).y + p.y}, {(pt->c).x + p.x, (pt->c).y + p.y}};
    return moved;
}

void move_triangle(Triangle* pt, Point p)
{
    (pt->a).x += p.x;
    (pt->a).y += p.y;
    (pt->b).x += p.x;
    (pt->b).y += p.y;
    (pt->c).x += p.x;
    (pt->c).y += p.y;
}


int main()
{
    
    Triangle t = {{1.00, 0.00}, {0.50, 2.00}, {0.00, 1.50}};
    printf("Perimeter = %.2f\n", get_triangle_perimeter(&t));

    Point d = {1.0, 1.0};
    print_triangle(&t);
    move_triangle(&t, d);
    print_triangle(&t);

}