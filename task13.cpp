// 13
template<typename T>
vector<T> merge_vectors(vector<T>& a, vector<T>& b) {
    int n = a.size(), m = b.size(), i = 0, j = 0;
    vector<T> res;
    while(i < n && j < m) {
        if(a[i] < b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }
    while(i < n) res.push_back(a[i++]);
    while(j < m) res.push_back(b[j++]);
    return res;
}
