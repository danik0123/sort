// 20
#include <algorithm>
#include <vector>
#include <iostream>

struct point {
    int x;
    int y;
};

bool compare_by_distance(const point& a, const point& b) {
    return a.x*a.x + a.y*a.y < b.x*b.x + b.y*b.y;
}

// Example usage
/*
std::vector<point> v = {{1,2},{3,4},{0,0}};
std::sort(v.begin(), v.end(), compare_by_distance);
*/
