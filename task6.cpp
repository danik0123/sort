// 6
template<typename T>
void insertion_sort_desc(vector<T>& v) {
    int n = v.size();
    for(int i = 1; i < n; i++) {
        T key = v[i];
        int j = i-1;
        while(j >= 0 && v[j] < key) { v[j+1] = v[j]; j--; }
        v[j+1] = key;
    }
}
