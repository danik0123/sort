// 15
template<typename T>
void merge_sort_iterative(vector<T>& v) {
    int n = v.size();
    for(int sz = 1; sz < n; sz *= 2) {
        for(int left = 0; left < n - sz; left += 2*sz) {
            int mid = left + sz;
            int right = min(left+2*sz, n);
            vector<T> merged = merge_vectors(vector<T>(v.begin()+left, v.begin()+mid),
                                             vector<T>(v.begin()+mid, v.begin()+right));
            for(int i = 0; i < merged.size(); i++) v[left+i] = merged[i];
        }
    }
}
