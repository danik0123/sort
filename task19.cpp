// 19
#include <algorithm>
#include <vector>
#include <iostream>

struct student {
    int id;
    int age;
    double grade;
};

bool compare_by_grade_desc(const student& a, const student& b) {
    return a.grade > b.grade;
}

bool compare_by_age(const student& a, const student& b) {
    return a.age < b.age;
}

// Example usage
/*
std::vector<student> v = {{1,20,90},{2,19,95},{3,21,85}};
std::sort(v.begin(), v.end(), compare_by_grade_desc);
std::sort(v.begin(), v.end(), compare_by_age);
*/
