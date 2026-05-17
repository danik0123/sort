// 17
struct student { int id; int age; double grade; };
bool compare_by_grade_desc(const student& a, const student& b) { return a.grade > b.grade; }
bool compare_by_age(const student& a, const student& b) { return a.age < b.age; }
