// 18
struct point { int x; int y; };
bool compare_by_distance(const point& a, const point& b) {
    return a.x*a.x + a.y*a.y < b.x*b.x + b.y*b.y;
}
