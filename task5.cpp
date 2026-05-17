// 5
template<typename T>
void insert_sorted(vector<T>& v, T value) {
    v.push_back(value);
    int i = v.size() - 2;
    while(i >= 0 && v[i] > value) { v[i+1] = v[i]; i--; }
    v[i+1] = value;
}
