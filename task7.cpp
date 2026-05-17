// 7
template<typename T>
int insertion_sort_count(vector<T>& v) {
    int n = v.size(), shifts = 0;
    for(int i = 1; i < n; i++) {
        T key = v[i]; int j = i-1;
        while(j >= 0 && v[j] > key) { v[j+1] = v[j]; j--; shifts++; }
        v[j+1] = key;
    }
    return shifts;
}
